/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:45:26 by cristianama       #+#    #+#             */
/*   Updated: 2023/11/03 20:04:50 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & ref) {
	_exchange_rates = ref._exchange_rates;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & rhs) {
	if (this != &rhs) {
		_exchange_rates = rhs._exchange_rates;
	}
	return *this;
}

bool BitcoinExchange::loadDataBase(const std::string &db_file)
{
	std::ifstream infile(db_file);
	if (!infile.is_open())
		return false;
	std::string line, date;
	float rate;

	// Skip the header line
	std::getline(infile, line);
	int lineNum = 1;
	while (std::getline(infile, line)) {
		lineNum++;
		std::stringstream ss(line);
		if (!std::getline(ss, date, ',') || !(ss >> rate)) {
			std::cout << "Error: database format on line " << lineNum << std::endl;
			return false;
		}
		_exchange_rates[date] = rate;
	}

	return true;
}

bool BitcoinExchange::validateDate(const std::string &date) {
	int year, month, day;
	std::stringstream ss(date);
	ss >> year;
	if (ss.get() != '-') return false;
	ss >> month;
	if (ss.get() != '-') return false;
	ss >> day;

	if (month < 1 || month > 12) return false;

	// Calculate the maximum day for the given month
	int maxDay;
	if (month == 2) {
		// For February, leap year check
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			maxDay = 29;
		} else {
			maxDay = 28;
		}
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		maxDay = 30;
	} else {
		maxDay = 31;
	}

	if (day < 1 || day > maxDay) return false;

	return true;
}


void BitcoinExchange::evaluateInputFile(std::ifstream &filename)
{
	std::string line, date, valueString;
	double value;

	// Check if header line exists
	if (!std::getline(filename, line)) {
		std::cerr << "Error: File is empty or corrupted." << std::endl;
		return;
	}

	while (std::getline(filename, line)) {
		std::stringstream ss(line);
		
		// Read until | to get date
		if (!std::getline(ss, date, '|')) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue; 
		}
		// Read and check the rest of the line to get value
		std::getline(ss, valueString);
		if (valueString.empty()) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		date = date.substr(0, date.find_last_not_of(" ") + 1);
		valueString = valueString.substr(valueString.find_first_not_of(" "));
		if (!validateDate(date)) {
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		
		size_t processedChars = 0;
		try {
			value = std::stod(valueString, &processedChars);
			if (valueString.find_first_not_of(" ", processedChars) != std::string::npos) {
				std::cerr << "Error: bad value format => " << valueString << std::endl;
				continue;
			}
			if (value < 0) {
				std::cerr << "Error: not a positive number." << std::endl;
				continue;
			}
			if (value > 1000) {
				std::cerr << "Error: too large a number." << std::endl;
				continue;
			}

			std::string closestDate = nearestDate(_exchange_rates, date);
			double rate = _exchange_rates[closestDate];
			double resultValue = value * rate;
			std::cout << date << " => " << value << " = " << resultValue << std::endl;
		} catch (const std::exception &e) {
			std::cerr << "Error handling line '" << line << "': " << e.what() << std::endl;
		}
	}
}

std::string BitcoinExchange::nearestDate(const std::map<std::string, float>& exchangeRates, const std::string& targetDate) {
	int minDifference = INT_MAX;
	std::string nearest;

	for (std::map<std::string, float>::const_iterator it = exchangeRates.begin(); it != exchangeRates.end(); ++it) {
		int distance = dateDifference(targetDate, it->first); // Get difference between given date and the current one in map loop
		if (distance < 0)
		{
			nearest = (std::prev(it))->first;
			break ;
		}
		if (distance < minDifference) {
			minDifference = distance;
			nearest = it->first;
		}
	}

	return nearest;
}


// Helper function to check for leap year
bool isLeapYear(int year) {
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Helper function to get the number of days up to a certain date within the year (from 01/01)
int daysUptoDate(int year, int month, int day) {
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (isLeapYear(year)) {
		daysInMonth[2] = 29;
	}

	int days = 0;
	for (int i = 0; i < month; ++i) {
		days += daysInMonth[i];
	}
	return days + day;
}

int BitcoinExchange::dateDifference(const std::string &date1, const std::string &date2) {
	int year1, month1, day1;
	int year2, month2, day2;

	std::stringstream ss1(date1);
	ss1 >> year1;
	ss1.ignore(); // skip the '-'
	ss1 >> month1;
	ss1.ignore(); // skip the '-'
	ss1 >> day1;

	std::stringstream ss2(date2);
	ss2 >> year2;
	ss2.ignore(); // skip the '-'
	ss2 >> month2;
	ss2.ignore(); // skip the '-'
	ss2 >> day2;

	// Total of days from day 0 up to date, with an approximate calculation for leap years (divisible by 4)
	int days1 = year1 * 365 + daysUptoDate(year1, month1, day1) + (year1 / 4);
	int days2 = year2 * 365 + daysUptoDate(year2, month2, day2) + (year2 / 4);
	int dayDiff = days1 - days2;

	return dayDiff;
}

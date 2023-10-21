/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:45:26 by cristianama       #+#    #+#             */
/*   Updated: 2023/10/21 11:57:52 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::loadDataBase(const std::string &db_file)
{
	std::ifstream infile(db_file);
	if (!infile.is_open())
		return false;
	
	// Use a map to store the data with the date as the key and the rate as the value
    std::map<std::string, float> exchange_rates;

    std::string line, date;
    float rate;

    // Skip the header line
    std::getline(infile, line);
	
	while (std::getline(infile, line)) {
        std::stringstream ss(line);
        std::getline(ss, date, ',');  // Read until the comma to get the date
        ss >> rate;                   // Read the rest to get the rate

        exchange_rates[date] = rate;
    }

	_exchange_rates = exchange_rates;
	
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

    // Basic date validation
    if (month < 1 || month > 12) return false;

    // Calculate the maximum day for the given month
    int maxDay;
    if (month == 2) {
        // For February, consider a leap year check if necessary
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
	
    if (!std::getline(filename, line)) { // Check if header line exists
        std::cerr << "Error: File is empty or corrupted." << std::endl;
        return;
    }

    while (std::getline(filename, line)) {
        std::stringstream ss(line);
		
        if (!std::getline(ss, date, '|')) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue; 
		}
		std::getline(ss, valueString); // Read the rest of the line to get value

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
        int distance = std::abs(dateDifference(targetDate, it->first));
        if (distance < minDifference) {
            minDifference = distance;
            nearest = it->first;
        }
    }
    
    return nearest;
}

// Función auxiliar para determinar si un año es bisiesto
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
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

    // Return the difference in days
    return (year1 - year2) * 365 + (month1 - month2) * 30 + (day1 - day2);
}

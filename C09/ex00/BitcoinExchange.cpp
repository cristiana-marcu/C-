/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:45:26 by cristianama       #+#    #+#             */
/*   Updated: 2023/09/01 23:16:52 by cristianama      ###   ########.fr       */
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
	
	std::string date;
	float rate;
	while (infile >> date >> rate)
		_exchange_rates[date] = rate;
	
	return true;
}

void BitcoinExchange::evaluateInputFile(std::ifstream &filename)
{
	std::string line;
	while (std::getline(filename, line))
	{
		//split the line into date and value
		//validate date
		//use exchange rates to find the closest date and output the multiplied value
		//handle errors
	}
}

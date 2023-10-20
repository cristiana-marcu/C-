/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:45:38 by cristianama       #+#    #+#             */
/*   Updated: 2023/10/20 21:42:17 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 
#include <map>
#include <cstdlib> // para atoi

class BitcoinExchange {
	private:
		std::map<std::string, float> _exchange_rates;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & ref);
		BitcoinExchange& operator=(BitcoinExchange const & rhs);

		bool loadDataBase(const std::string &db_file);
		bool validateDate(const std::string &date);
		std::string nearestDate(const std::map<std::string, float>& exchangeRates, const std::string& date);
		int dateDifference(const std::string& date1, const std::string& date2);
		void evaluateInputFile(std::ifstream &filename);
};
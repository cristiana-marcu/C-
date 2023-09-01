/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:45:38 by cristianama       #+#    #+#             */
/*   Updated: 2023/09/01 22:44:45 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> _exchange_rates;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const & ref);
		BitcoinExchange& operator=(BitcoinExchange const & rhs);

		bool loadDataBase(const std::string &db_file);
		void evaluateInputFile(std::ifstream &filename);
};
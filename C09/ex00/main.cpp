/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/10/20 20:58:39 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./btc [input_file]" << std::endl;
		return 1;
	}

	std::ifstream infile(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "Couldn't open file" << std::endl;
		return 1;
	}
	
	BitcoinExchange btc;
	if (!btc.loadDataBase("data.csv"))
	{
		std::cout << "Couldn't load database" << std::endl;
		return 1;
	}

	btc.evaluateInputFile(infile);
	
	return 0;
}
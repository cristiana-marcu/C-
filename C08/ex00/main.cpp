/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/08/03 12:07:27 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main ( void )
{
	std::vector<int> v;
	
	v.push_back(0);
	v.push_back(334);
	v.push_back(568759);
	v.push_back(01);
	v.push_back(-5689);

	try {
		std::cout << ::easyfind(v, 334) << std::endl;
	} catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << ::easyfind(v, static_cast<char>(48)) << std::endl;
	} catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << ::easyfind(v, -334) << std::endl;
	} catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

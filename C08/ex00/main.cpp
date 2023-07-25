/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/25 19:30:45 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int main ( void )
{
	int array[5] = {0, 334, 568759, 01, -5689};

	try {
		std::cout << ::easyfind(array, 334) << std::endl;
	} catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << ::easyfind(array, static_cast<char>(48)) << std::endl;
	} catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << ::easyfind(array, -334) << std::endl;
	} catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

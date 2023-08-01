/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/08/01 16:26:55 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

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

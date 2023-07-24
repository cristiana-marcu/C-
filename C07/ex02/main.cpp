/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/24 14:54:07 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {

	Array<int> intArray;
	std::cout << "Empty array size: " << intArray.size() << std::endl;

	Array<int> intArray2(5);
	std::cout << "intArray2 Size: " << intArray2.size() << std::endl;

	intArray = intArray2;
	std::cout << "Previously empty array size (after using = operator): " << intArray.size() << std::endl;

	try {
	Array<int> intArray(5);

	intArray[0] = 10;
	std::cout << "First element: " << intArray[0] << std::endl;

	const Array<int> constIntArray(5);
	std::cout << "Read access to const instance: " <<constIntArray[2] << std::endl;
	//constIntArray[2] = 5; //Trying to write on const instance

	intArray[5] = 20;  // Throws exceptions for out of bounds
	} catch (const std::out_of_range& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}

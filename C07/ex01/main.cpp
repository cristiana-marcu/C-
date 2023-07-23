/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/23 16:32:32 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void printInt(int x)
{
	std::cout << x << std::endl;
}

int main() {
	// Creamos un array de ints
	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(int);

	// Usamos nuestra función plantilla 'iter' para aplicar 'printInt' a cada elemento de 'array'
	iter(array, length, printInt);

	return 0;
}

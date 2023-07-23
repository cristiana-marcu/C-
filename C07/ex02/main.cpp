/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/23 18:27:32 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {

	Array<int> intArray;
	std::cout << "Tamaño del Array vacío: " << intArray.size() << std::endl;

	// Creamos un Array de ints de tamaño 5
	Array<int> intArray2(5);
	std::cout << "Tamaño del Array de tamaño 5: " << intArray2.size() << std::endl;

	// Copiamos el Array de tamaño 5 al Array vacío usando el operador de asignación
	intArray = intArray2;
	std::cout << "Tamaño del Array vacío después de la copia: " << intArray.size() << std::endl;

	return 0;
}

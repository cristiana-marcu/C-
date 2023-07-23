/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/23 18:35:13 by cmarcu           ###   ########.fr       */
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

	try {
	// Creamos un Array de ints de tamaño 5
	Array<int> intArray(5);

	// Establecemos el valor del primer elemento
	intArray[0] = 10;
	std::cout << "Primer elemento del Array: " << intArray[0] << std::endl;

	// Intentamos acceder a un índice fuera de rango
	intArray[5] = 20;  // Debería lanzar una excepción
} catch (const std::out_of_range& e) {
	std::cout << "Error: " << e.what() << std::endl;
    }

	return 0;
}

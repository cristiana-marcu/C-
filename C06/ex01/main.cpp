/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/16 21:57:33 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void ) {

	Data *data = new Data;
	std::cout << "Data:      " << data << std::endl;
	
	uintptr_t rawData = Serializer::serialize(data);
	std::cout << "Raw data:  " << rawData << std::endl;

	data = Serializer::deserialize(rawData);
	std::cout << "Data:      " << data << std::endl;
	
	std::cout << "Data:      " << Serializer::deserialize(Serializer::serialize(data)) << std::endl;
	
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:40:35 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 15:50:31 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

	std::cout << "WrongAnimal constructor called" << std::endl;
	this->_type = "Generic animal type";

	return ;
}

WrongAnimal::WrongAnimal( std::string type ) {

	std::cout << "WrongAnimal parameter constructor called" << std::endl;
	this->_type = type;

	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & ref ) : _type(ref._type) {

	std::cout << "Copy constructor called" << std::endl;

	return ;
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Generic animal sound" << std::endl;

	return ;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}


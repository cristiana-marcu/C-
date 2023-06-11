/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:40:37 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 13:36:45 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << "Animal constructor called" << std::endl;
	this->_type = "Generic";

	return ;
}

Animal::Animal( std::string type ) {

	std::cout << "Animal parameter constructor called" << std::endl;
	this->_type = type;

	return ;
}

Animal::Animal( Animal const & ref ) : _type(ref._type) {

	std::cout << "Copy constructor called" << std::endl;

	return ;
}

Animal::~Animal( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

void Animal::makeSound(void) const
{
	std::cout << "Generic animal sound" << std::endl;

	return ;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

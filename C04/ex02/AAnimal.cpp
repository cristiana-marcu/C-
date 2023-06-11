/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:40:37 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 20:53:07 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {

	std::cout << "Animal constructor called" << std::endl;
	this->_type = "Generic animal type";

	return ;
}

AAnimal::AAnimal( std::string type ) {

	std::cout << "Animal parameter constructor called" << std::endl;
	this->_type = type;

	return ;
}

AAnimal::AAnimal( AAnimal const & ref ) : _type(ref._type) {

	std::cout << "Copy constructor called" << std::endl;

	return ;
}

AAnimal::~AAnimal( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

void AAnimal::makeSound(void) const
{
	std::cout << "Generic animal sound" << std::endl;

	return ;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}

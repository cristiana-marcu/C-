/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:07:52 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 13:36:58 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	std::cout << "Dog constructed" << std::endl;
	this->_type = "Dog";

	return ;
}

Dog::Dog(Dog const &ref)
{
	this->_type = ref.getType();

	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();

	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;

	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF" << std::endl;

	return ;
}

std::string Dog::getType(void) const
{
	return this->_type;
}

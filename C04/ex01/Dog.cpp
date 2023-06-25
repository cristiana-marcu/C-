/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:07:52 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/21 19:32:42 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	std::cout << "Dog constructed" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();

	return ;
}

Dog::Dog(Dog const &ref)
{
	this->_type = ref.getType();
	this->_brain = new Brain(*ref._brain);

	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_brain = rhs._brain;
	}

	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
	delete this->_brain;

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

Brain * Dog::getBrain(void) const
{
	return this->_brain;
}

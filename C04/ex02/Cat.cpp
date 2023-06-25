/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:27:27 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/21 20:07:28 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "Cat constructed" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();

	return ;
}

Cat::Cat(Cat const &ref)
{
	this->_type = ref.getType();
	this->_brain = new Brain(*ref._brain);

	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_brain = rhs._brain;
	}

	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
	delete this->_brain;

	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "... purrrrrrrrrr ..." << std::endl;

	return ;
}

std::string Cat::getType(void) const
{
	return this->_type;
}

Brain * Cat::getBrain(void) const
{
	return this->_brain;
}

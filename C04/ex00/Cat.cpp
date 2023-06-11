/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:27:27 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 13:36:33 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "Cat constructed" << std::endl;
	this->_type = "Cat";

	return ;
}

Cat::Cat(Cat const &ref)
{
	this->_type = ref.getType();

	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();

	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;

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

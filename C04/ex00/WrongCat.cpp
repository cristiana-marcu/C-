/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:27:27 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 15:51:22 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	std::cout << "WrongCat constructed" << std::endl;
	this->_type = "WrongCat";

	return ;
}

WrongCat::WrongCat(WrongCat const &ref)
{
	this->_type = ref.getType();

	return ;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs.getType();

	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed" << std::endl;

	return ;
}

void WrongCat::makeSound(void) const
{
	std::cout << "... purrrrrrrrrr ..." << std::endl;

	return ;
}

std::string WrongCat::getType(void) const
{
	return this->_type;
}

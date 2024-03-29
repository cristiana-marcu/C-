/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:12:48 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/19 21:54:22 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( Ice const & rhs ) : AMateria("ice")
{
	*this = rhs;
}

Ice &Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();

	return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:12:48 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/19 21:53:36 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( Cure const & rhs ) : AMateria("cure")
{
	*this = rhs;
}

Cure &Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();

	return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:12:46 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/20 19:18:03 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("undefined") {}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << "AMateria of type " << this->_type << " created" << std::endl;

	return ;
}

AMateria::AMateria(AMateria const &ref)
{
	*this = ref;

	return ;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();

	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria of type " << this->_type << " destroyed" << std::endl;

	return ;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria of type " << this->getType() << " used on " << target.getName() << std::endl;
}

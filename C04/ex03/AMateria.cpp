/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:12:46 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/12 21:33:16 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("undefined") {}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << "AMateria of type " << this->_type << " created";

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
	std::cout << "AMateria of type " << this->_type << " destroyed";

	return ;
}

std::string const &AMateria::getType() const
{
	// TODO: Insertar una instrucción "return" aquí
}

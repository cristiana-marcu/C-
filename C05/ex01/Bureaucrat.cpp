/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:50:55 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/26 00:12:28 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat( std::string name, int range ) : _name(name), _range(range)
{
	if (range < 1)
		throw Bureaucrat::GradeTooLowException();
	if (range > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) : _name(src._name), _range(src._range)
{}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &rhs) 
{
	if (this != &rhs)
		_range = rhs._range;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {}

std::string Bureaucrat::getName( void ) const
{
	return _name;
}

int Bureaucrat::getRange( void ) const
{
	return _range;
}

void Bureaucrat::incrementRange( int amount )
{
	if (_range - amount < 1)
		throw Bureaucrat::GradeTooLowException();
	_range--;
}


void Bureaucrat::decrementRange( int amount )
{
	if (_range + amount > 150)
		throw Bureaucrat::GradeTooHighException();
	_range++;
}

std::ostream &operator<<( std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getRange() << std::endl;
	return o;
}
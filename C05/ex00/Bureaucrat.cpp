/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:50:55 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/26 22:06:51 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) : _name(src._name), _grade(src._grade)
{}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &rhs) 
{
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {}

std::string Bureaucrat::getName( void ) const
{
	return _name;
}

int Bureaucrat::getGrade( void ) const
{
	return _grade;
}

void Bureaucrat::incrementGrade( int amount )
{
	if (_grade - amount < 1)
		throw Bureaucrat::GradeTooLowException();
	_grade--;
}


void Bureaucrat::decrementGrade( int amount )
{
	if (_grade + amount > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade++;
}

std::ostream &operator<<( std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
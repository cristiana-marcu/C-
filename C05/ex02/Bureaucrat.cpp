/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:50:55 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 22:29:46 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat( std::string name, int range ) : _name(name), _grade(range)
{
	if (range < 1)
		throw Bureaucrat::GradeTooLowException();
	if (range > 150)
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

void Bureaucrat::signForm( AForm &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << *this << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm( AForm const & form )
{
	try
	{
		form.execute(*this);
		std::cout << *this << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream &operator<<( std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
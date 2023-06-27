/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:12:49 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/27 20:39:33 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("NaN (not a name haha)"), _signed(false), _sign_grade(1), _exec_grade(1)
{}

AForm::AForm( std::string name, int sign_grade, int exec_grade ) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooLowException();
	if (sign_grade > 150 || exec_grade > 150)
		throw AForm::GradeTooHighException();
}

AForm::AForm( AForm const &src ) : _name(src._name), _signed(src._signed), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{}

AForm& AForm::operator=( AForm const &rhs) 
{
	if (this != &rhs)
		_signed = rhs._signed;
	return (*this);
}

AForm::~AForm( void ) {}

std::string AForm::getName( void ) const
{
	return _name;
}

bool AForm::getSigned( void )
{
	return _signed;
}

int AForm::getSignGrade( void ) const
{
	return _sign_grade;
}

int AForm::getExecGrade( void ) const
{
	return _exec_grade;
}

void AForm::beSigned( Bureaucrat& ref )
{
	if (ref.getGrade() > _sign_grade)
		throw AForm::GradeTooLowException();
	_signed = true;
}

std::ostream& operator<<(std::ostream& o, const AForm& rhs)
{
	o << rhs.getName();
	return o;
}
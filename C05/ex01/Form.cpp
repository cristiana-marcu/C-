/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:12:49 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/26 21:41:13 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("NaN (not a name haha)"), _signed(false), _sign_grade(1), _exec_grade(1)
{}

Form::Form( std::string name, int sign_grade, int exec_grade ) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooLowException();
	if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooHighException();
}

Form::Form( Form const &src ) : _name(src._name), _signed(src._signed), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{}

Form& Form::operator=( Form const &rhs) 
{
	if (this != &rhs)
		_signed = rhs._signed;
	return (*this);
}

Form::~Form( void ) {}

std::string Form::getName( void ) const
{
	return _name;
}

bool Form::getSigned( void )
{
	return _signed;
}

int Form::getSignGrade( void ) const
{
	return _sign_grade;
}

int Form::getExecGrade( void ) const
{
	return _exec_grade;
}

void Form::beSigned( Bureaucrat& ref )
{
	if (ref.getGrade() > _sign_grade)
		throw Form::GradeTooLowException();
	_signed = true;
}
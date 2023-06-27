/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:30:49 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 20:30:20 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
*/

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm& const ref ) : _target(ref.getTarget()) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& const rhs )
{
	if (this != &rhs)
		_target = rhs.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() { return _target; }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!(this->getSigned()))
		throw AForm::NotSignedException();
	else if (executor.getGrade() )
	
}
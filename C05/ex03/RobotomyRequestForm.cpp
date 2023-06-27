/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:31:20 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 22:53:19 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequest", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & ref ) : AForm(ref), _target(ref.getTarget()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this != &rhs)
		_target = rhs.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const { return _target; }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	
	static int i = 0;
	if (i % 2 == 0)
		std::cout << "BIBOBIBIMOBIMO " << _target << " has been robotomized BIBOBIBIBIBOBOOBBIMO" <<std::endl;
	else
		std::cout << "Robotomy failed... bibobi..." << std::endl;
}
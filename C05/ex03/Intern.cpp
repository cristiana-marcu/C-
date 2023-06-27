/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:17:21 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 23:44:38 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &ref)
{
	*this = ref;
}

Intern& Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string name, std::string target)
{
	AForm* forms[] = {
		new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (forms[i]->getName() == name)
		{
			std::cout << "Intern creates " << forms[i]->getName() << " form" << std::endl;
			return forms[i];
		}
	}
	std::cout << "Intern couldn't create " << name << " form" << std::endl;
	return nullptr;
}

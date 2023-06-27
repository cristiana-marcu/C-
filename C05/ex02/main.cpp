/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/27 23:12:24 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {

	try
	{
		Bureaucrat pepe("Pepe", 109);
		ShrubberyCreationForm tree("little_tree");
		RobotomyRequestForm robot("bibobimo");
		PresidentialPardonForm pardon("Crisi");
		
		pepe.signForm(tree);
		pepe.executeForm(tree);

		pepe.signForm(robot);
		pepe.executeForm(robot);

		pepe.signForm(pardon);
		pepe.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/26 22:06:38 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {
	try
	{
		Bureaucrat *pepe = new Bureaucrat("Pepe", -5);
		
		std::cout << *pepe;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *pep0 = new Bureaucrat("Pep0", 1);
		std::cout << *pep0;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat *pepiii = new Bureaucrat("Pepiii", 195);
		std::cout << *pepiii;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}

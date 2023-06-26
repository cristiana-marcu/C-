/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/26 21:58:41 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {


	try
	{
		Bureaucrat *pepe = new Bureaucrat("Pepe", 5);
		Bureaucrat *pep0 = new Bureaucrat("Pep0", 1);
		Bureaucrat *pepiii = new Bureaucrat("Pepiii", 145);
		
		std::cout << *pepe;
		std::cout << *pep0;
		std::cout << *pepiii;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

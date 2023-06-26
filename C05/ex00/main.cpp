/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/26 19:08:04 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

	Bureaucrat *pepe = new Bureaucrat("Pepe", 5);
	Bureaucrat *pep0 = new Bureaucrat("Pep0", 1);
	Bureaucrat *pepiii = new Bureaucrat("Pepiii", 145);

	std::cout << *pepe;
	std::cout << *pep0;
	std::cout << *pepiii;

	return 0;
}

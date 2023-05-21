/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/05/21 16:05:54 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap pavon("Pavon");
	std::cout << "···············" << std::endl;
	ClapTrap jalva("Jalva");
	std::cout << "···············" << std::endl;
	ClapTrap anonym;
	std::cout << "···············" << std::endl;

	pavon.attack("Jalva");
	pavon.takeDamage(5);
	pavon.beRepaired(3);
	anonym.attack("Pavon");
	std::cout << "···············" << std::endl;

	return 0;
}

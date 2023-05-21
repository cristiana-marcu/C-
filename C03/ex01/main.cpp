/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/05/21 16:17:05 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

	ClapTrap pavon("Pavon");
	std::cout << "···············" << std::endl;
	ScavTrap jalva("Jalva");
	std::cout << "···············" << std::endl;

	pavon.attack("Jalva");
	jalva.guardGate();
	jalva.takeDamage(20);
	jalva.attack("Pavon");
	pavon.takeDamage(5);
	std::cout << "···············" << std::endl;

	return 0;
}

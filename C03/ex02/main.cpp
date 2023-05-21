/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/05/21 16:18:41 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {

	ClapTrap pavon("Peivon");
	std::cout << "···············" << std::endl;
	ScavTrap jalvarad("Joso");
	std::cout << "···············" << std::endl;
	FragTrap nachito("Zipi");
	std::cout << "···············" << std::endl;

	jalvarad.guardGate();
	nachito.highFivesGuys();
	pavon.attack("Zipi");
	nachito.takeDamage(20);
	nachito.attack("Peivon");
	pavon.takeDamage(30);
	std::cout << "···············" << std::endl;

	return 0;
}

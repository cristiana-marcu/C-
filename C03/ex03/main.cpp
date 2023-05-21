/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/05/21 16:15:43 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {

	ClapTrap pavon("Peivon");
	std::cout << "···············" << std::endl;
	ScavTrap jalvarad("Joso");
	std::cout << "···············" << std::endl;
	FragTrap nachito("Zipi");
	std::cout << "···············" << std::endl;
	DiamondTrap crisi("Crisi");
	std::cout << "···············" << std::endl;

	std::cout << "Diamond name: " << crisi.getName() << std::endl;
	std::cout << "Diamond hitpoints: " << crisi.getHitPoints() << std::endl;
	std::cout << "Diamond energy points: " << crisi.getEnergyPoints() << std::endl;
	std::cout << "Diamond attack damage: " << crisi.getAttackDamage() << std::endl;
	std::cout << "···············" << std::endl;

	crisi.whoAmI();
	std::cout << "···············" << std::endl;
	jalvarad.guardGate();
	nachito.highFivesGuys();
	pavon.attack("Zipi");
	nachito.takeDamage(0);
	nachito.attack("Peivon");
	pavon.takeDamage(30);
	std::cout << "···············" << std::endl;

	return 0;
}

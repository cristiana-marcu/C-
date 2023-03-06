/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/06 21:14:27 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
    
    // ClapTrap pavon("Peivon");
	// ScavTrap jalvarad("Joso");
	// FragTrap nachito("Zipi");
	DiamondTrap crisi("Crisi");

	std::cout << "Diamond name: " << crisi.getName() << std::endl;
	std::cout << "Diamond hitpoints: " << crisi.getHitPoints() << std::endl;
	std::cout << "Diamond energy points: " << crisi.getEnergyPoints() << std::endl;
	std::cout << "Diamond attack damage: " << crisi.getAttackDamage() << std::endl;

	crisi.whoAmI();
	// jalvarad.guardGate();
	// nachito.highFivesGuys();
	// pavon.attack("Zipi");
	// nachito.takeDamage(20);
	// nachito.attack("Peivon");
	// pavon.takeDamage(20);

	
    
    return 0;
}
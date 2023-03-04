/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/04 15:54:05 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
    
    ClapTrap pavon("Peivon");
	ScavTrap jalvarad("Joso");
	FragTrap nachito("Zipi");

	jalvarad.guardGate();
	nachito.highFivesGuys();
	pavon.attack("Zipi");
	nachito.takeDamage(20);
	nachito.attack("Peivon");
	pavon.takeDamage(20);
    
    return 0;
}
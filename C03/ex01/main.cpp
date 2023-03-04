/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/04 15:45:47 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
    
    ClapTrap pavon("Pavon");
    ScavTrap jalva("Jalva");

    pavon.attack("Jalva");
    jalva.guardGate();
    jalva.takeDamage(20);
    jalva.attack("Pavon");
    pavon.takeDamage(5);
    
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:08 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/04 13:51:35 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    
    ClapTrap pavon("Pavon");
    ClapTrap jalva("Jalva");
    ClapTrap anonym;

    pavon.attack("Jalva");
    pavon.takeDamage(5);
    pavon.beRepaired(3);
    
    anonym.attack("Pavon");

    return 0;
}
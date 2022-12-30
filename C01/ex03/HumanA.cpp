/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:30:26 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 14:04:20 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon weapon) {
    this->_name = name;
    this->_weapon = weapon;
}

Weapon HumanA::getWeapon( void ) {
    return this->_weapon;
}

void HumanA::setWeapon( Weapon weapon ) {
    this->_weapon = weapon;
}

std::string HumanA::getName( void ) {
    return this->_name;
}

void HumanA::setName( std::string name ) {
    this->_name = name;
}

void HumanA::attack( void ) {
    std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << std::endl;
}
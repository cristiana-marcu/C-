/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:31:36 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/02 20:11:30 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name) {
    this->_name = name;
}

Weapon HumanB::getWeapon( void ) {
    return *(this->_weapon);
}

void HumanB::setWeapon( Weapon& weapon ) {
    this->_weapon = &weapon;
}

std::string HumanB::getName( void ) {
    return this->_name;
}

void HumanB::setName( std::string name ) {
    this->_name = name;
}

void HumanB::attack( void ) {
    std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << std::endl;
}
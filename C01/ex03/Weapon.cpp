/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:45:52 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/02 19:57:12 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type) {
    this->_type = type;
}

std::string Weapon::getType() const { 
    return this->_type; 
}

void Weapon::setType( std::string type ) {
    this->_type = type;
}
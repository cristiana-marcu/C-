/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:45:52 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 13:50:33 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type) {
    this->type = type;
}

std::string Weapon::getType() const { 
    return this->type; 
}

void Weapon::setType( std::string type ) {
    this->type = type;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:40:00 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 12:16:47 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie( std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Destroying " << this->getName() << std::endl;
}

std::string Zombie::getName() {
    return this->name;
}

void Zombie::setName( std::string name ) {
    this->name = name;
}

void Zombie::announce( void ) {
    std::cout << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
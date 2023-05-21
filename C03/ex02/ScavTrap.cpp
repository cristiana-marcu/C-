/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:33:53 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/04 15:33:53 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;

    return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
       std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);

    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;

    return ;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap enters gate keeper mode!" << std::endl;

}

void ScavTrap::attack(std::string const & target) {

    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;

    return ;
}

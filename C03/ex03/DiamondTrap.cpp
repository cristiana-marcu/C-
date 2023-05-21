/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:07:00 by cmarcu            #+#    #+#             */
/*   Updated: 2023/05/21 16:14:31 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;

	this->_hitPoints = FragTrap::_HP;
	this->_energyPoints = ScavTrap::_EP;
	this->_attackDamage = FragTrap::_DP;

	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;

	this->_name = name;
	this->_hitPoints = FragTrap::_HP;
	this->_energyPoints = ScavTrap::_EP;
	this->_attackDamage = FragTrap::_DP;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs) : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;

	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if (this != &rhs)
		ScavTrap::operator=(rhs); //check

	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;

	return ;
}

void DiamondTrap::attack(std::string const & target) {

	ScavTrap::attack(target);
	return ;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name: " << this->_name << std::endl;
	std::cout << "Diamond's claptrap name: " << this->getName() << std::endl;
}

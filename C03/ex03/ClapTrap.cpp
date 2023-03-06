/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:10 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/06 21:08:37 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    
    std::cout << "Default constructor called" << std::endl;
    this->_name = "TheNamelessScaryMonster";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;

    return ; 
}

ClapTrap::ClapTrap( std::string name ) {
    
    std::cout << "Parameter constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    
    return ;
}

ClapTrap::ClapTrap( ClapTrap const & rhs ) : _name(rhs.getName()), _hitPoints(rhs.getHitPoints()), _energyPoints(rhs.getEnergyPoints()), _attackDamage(rhs.getAttackDamage()) {
    
    std::cout << "Copy constructor called" << std::endl;

    return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
    
    if (this != &rhs) {
        this->_name = rhs.getName();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_attackDamage = rhs.getAttackDamage();
    }
    
    return *this;
}

ClapTrap::~ClapTrap( void ) {
    
    std::cout << "Destructor called" << std::endl;

    return ;
}

//Getters and setters
std::string ClapTrap::getName(void) const {
    
    return this->_name;
}

unsigned int ClapTrap::getHitPoints(void) const {
   
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const {
   
    return this->_energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
    
    return this->_attackDamage;
}

void ClapTrap::setName(std::string name) {
    
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int i) {

    this->_hitPoints = i;
}

void ClapTrap::setEnergyPoints(unsigned int i) {

    this->_energyPoints = i;
}

void ClapTrap::setAttackDamage(unsigned int i) {

    this->_attackDamage = i;
}

//Special functions
void ClapTrap::attack(std::string const &target) {
    
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;

    return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage." << std::endl;

    return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
    
    std::cout << "ClapTrap " << this->getName() << " is repaired by " << amount << " points " << std::endl;

    return ;
}

std::ostream & operator<<(std::ostream &o, ClapTrap const & obj) {
    
    o << obj.getName();
    return o;
}
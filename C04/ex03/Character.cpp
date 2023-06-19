/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:05:32 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/19 22:41:44 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character " << this->_name << " created." << std::endl;
}

Character::Character( Character const & rhs) : _name(rhs.getName())
{
	*this = rhs;
}

Character& Character::operator=( Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

Character::~Character() 
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete [] this->_inventory[i];
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
}

std::string const & Character::getName() const { return this->_name; }

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << this->getName() << " equipped with " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Cannot equip" << std::endl;
}

void Character::unequip(int idx)
{
	//Guardar las posiciones de memoria sin hacer delete de la materia
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
	{
		std::cout << this->getName();
		this->_inventory[idx]->use(target);
	}
}
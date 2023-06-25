/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 22:13:25 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/20 19:35:04 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	std::cout << "Materia created" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &ref )
{
	*this = ref;
}

MateriaSource& MateriaSource::operator=( MateriaSource const & ref )
{
	if (this != &ref)
		for (int i = 0; i < 4; i++)
			this->_materias[i] = ref._materias[i];

	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete this->_materias[i];
}

void MateriaSource::learnMateria( AMateria *m )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			return ;
		}
	}
	return ;
}

AMateria *MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	return NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:09:13 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/21 19:51:31 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;

	return ;
}

Brain::Brain(Brain const &ref)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];

	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::getIdea(int i)
{
	if (i >= 0 && i < 100)
		return this->_ideas[i];
	return NULL;
}

void Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
}

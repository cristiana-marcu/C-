/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:06:02 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/12 21:09:46 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	
	Character();
	Character( Character const & rhs );
	Character & operand=( Character const & rhs );
	~Character();
	
	std::string const & getName() const = 0;
	void equip(AMateria* m) = 0;
	void unequip(int idx) = 0;
	void use(int idx, ICharacter& target) = 0;
};
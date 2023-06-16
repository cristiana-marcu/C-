/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:06:02 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/16 12:36:56 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	std::string _name;
	AMateria *_inventory[4];
	
public:
	
	Character( std::string const & name );
	Character( Character const & rhs );
	Character & operator=( Character const & rhs );
	~Character();
	
	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:37:18 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/19 21:52:41 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria 
{
public:
	Cure();
	Cure( Cure const & rhs);
	Cure & operator=( Cure const & rhs );
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:37:18 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/20 14:34:49 by cmarcu           ###   ########.fr       */
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

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

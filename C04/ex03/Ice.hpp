/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:37:18 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/12 21:36:18 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria 
{
public:
	Ice();
	Ice( Ice const & rhs);
	Ice & operator=( Ice const & rhs );
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:13:10 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/19 22:17:42 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
	
public:
	AMateria( void );
	AMateria(std::string const & type);
	AMateria(AMateria const & ref);
	AMateria & operator=(AMateria const & rhs);
	~AMateria();
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
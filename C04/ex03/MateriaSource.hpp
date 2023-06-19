/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 22:13:56 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/19 22:50:15 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_materias[4];
	
public:
	MateriaSource();
	MateriaSource( MateriaSource const &ref );
	MateriaSource &operator=( MateriaSource const &ref );
	~MateriaSource();
	
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:40:35 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 20:56:09 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class AAnimal {

protected:
	std::string _type;

public:
	AAnimal( void );
	AAnimal(std::string type );
	AAnimal( AAnimal const & ref);
	AAnimal & operator=( AAnimal const & rhs );
	virtual ~AAnimal();

	virtual void makeSound( void ) const = 0;
	virtual std::string getType( void ) const;

};

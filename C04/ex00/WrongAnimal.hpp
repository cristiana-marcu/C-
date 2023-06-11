/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:40:35 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 15:45:29 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class WrongAnimal {

protected:
	std::string _type;

public:
	WrongAnimal( void );
	WrongAnimal(std::string type );
	WrongAnimal( WrongAnimal const & ref);
	WrongAnimal & operator=( WrongAnimal const & rhs );
	virtual ~WrongAnimal();

	void makeSound( void ) const;
	std::string getType( void ) const;

};

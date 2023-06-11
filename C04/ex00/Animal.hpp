/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:40:35 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 13:36:17 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Animal {

protected:
	std::string _type;

public:
	Animal( void );
	Animal(std::string type );
	Animal( Animal const & ref);
	Animal & operator=( Animal const & rhs );
	~Animal();

	void makeSound( void ) const;
	std::string getType( void ) const;

};

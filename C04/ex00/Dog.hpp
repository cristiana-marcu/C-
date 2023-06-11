/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:05:42 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 15:35:23 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {

private:
	std::string _type;

public:
	Dog( void );
	Dog( Dog const & ref);
	Dog & operator=(Dog const & rhs);
	virtual ~Dog( void );

	void makeSound( void ) const;
	std::string getType( void ) const;

};

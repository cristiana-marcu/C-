/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:05:42 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/21 19:32:34 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

private:
	std::string _type;
	Brain* _brain;

public:
	Dog( void );
	Dog( Dog const & ref);
	Dog & operator=(Dog const & rhs);
	~Dog();

	void makeSound( void ) const;
	std::string getType( void ) const;
	Brain *getBrain( void ) const;
};

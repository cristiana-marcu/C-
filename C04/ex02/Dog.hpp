/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:05:42 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 20:53:32 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

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

};

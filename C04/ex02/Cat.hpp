/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:29:06 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/21 20:06:42 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

private:
	std::string _type;
	Brain* _brain;

public:
	Cat( void );
	Cat( Cat const & ref);
	Cat & operator=(Cat const & rhs);
	~Cat();

	void makeSound( void ) const;
	std::string getType( void ) const;
	Brain *getBrain( void ) const;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:29:06 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 18:22:25 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

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

};

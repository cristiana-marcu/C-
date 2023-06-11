/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:29:06 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 15:35:42 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {

private:
	std::string _type;

public:
	Cat( void );
	Cat( Cat const & ref);
	Cat & operator=(Cat const & rhs);
	virtual ~Cat( void );

	void makeSound( void ) const;
	std::string getType( void ) const;

};

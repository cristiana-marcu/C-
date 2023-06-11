/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:29:06 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/11 15:45:10 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

private:
	std::string _type;

public:
	WrongCat( void );
	WrongCat( WrongCat const & ref);
	WrongCat & operator=(WrongCat const & rhs);
	virtual ~WrongCat( void );

	void makeSound( void ) const;
	std::string getType( void ) const;

};

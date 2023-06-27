/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:17:34 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 23:25:14 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "AForm.hpp"

class Intern {
public:
	Intern();
	Intern( Intern const &ref );
	Intern& operator=( Intern const &rhs );
	~Intern();

	AForm* makeForm( std::string name, std::string target);
};
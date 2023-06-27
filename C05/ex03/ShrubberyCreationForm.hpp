/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:30:39 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 22:02:03 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
	std::string _target;
	ShrubberyCreationForm();
	
public:
	ShrubberyCreationForm( std::string const target );
	ShrubberyCreationForm( ShrubberyCreationForm const & ref );
	ShrubberyCreationForm& operator=( ShrubberyCreationForm const & rhs );
	~ShrubberyCreationForm();

	std::string getTarget() const;
	
	void execute( const Bureaucrat & executor ) const;
};
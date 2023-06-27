/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:31:13 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 22:25:51 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.
*/

#pragma once
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
private:
	std::string _target;
	RobotomyRequestForm();

public:
	RobotomyRequestForm( std::string const target );
	RobotomyRequestForm( RobotomyRequestForm const &ref );
	RobotomyRequestForm& operator=( RobotomyRequestForm const &rhs );
	~RobotomyRequestForm();
	
	std::string getTarget() const;
	
	void execute( const Bureaucrat & executor ) const;
};
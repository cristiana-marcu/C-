/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:31:32 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 23:07:41 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.
*/

#pragma once
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm( std::string const target );
	PresidentialPardonForm( PresidentialPardonForm const &ref );
	PresidentialPardonForm& operator=( PresidentialPardonForm const &rhs );
	~PresidentialPardonForm();
	
	std::string getTarget() const;
	
	void execute( const Bureaucrat & executor ) const;

};
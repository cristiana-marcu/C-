/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 09:18:23 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/27 15:36:22 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat 
{
private:
	const std::string _name;
	int _grade;
	
public:
	Bureaucrat();
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const &src );
	Bureaucrat & operator=( Bureaucrat const &rhs );
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade(int amount);
	void decrementGrade(int amount);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "Grade is too high";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "Grade is too low";
		}
	};
	
	void signForm( Form &form );
	void executeForm(Form const & form);
};

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs);
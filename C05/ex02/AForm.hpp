/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:12:51 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/27 15:34:30 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class AForm {
private:
	const std::string _name;
	bool _signed;
	const int _sign_grade;
	const int _exec_grade;

public:
	AForm();
	AForm( std::string name, int sign_grade, int exec_grade );
	AForm( AForm const &ref );
	AForm& operator=( AForm const &ref );
	~AForm();

	std::string getName() const;
	bool getSigned();
	int getSignGrade() const;
	int getExecGrade() const;

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

	void beSigned(Bureaucrat& ref);
	void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

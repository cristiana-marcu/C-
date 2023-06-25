/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 09:18:23 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/26 00:12:19 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Bureaucrat 
{
private:
	const std::string _name;
	int _range;
	
public:
	Bureaucrat();
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const &src );
	Bureaucrat & operator=( Bureaucrat const &rhs );
	~Bureaucrat();

	std::string getName() const;
	int getRange() const;
	void incrementRange(int amount);
	void decrementRange(int amount);

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

};

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 09:18:23 by cristianama       #+#    #+#             */
/*   Updated: 2023/06/25 09:33:23 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Bureaucrat;

#pragma once
# include <iostream>

class Bureaucrat 
{
private:
	const std::string _name;
	int range;
	
public:
	Bureaucrat();
	Bureaucrat( std::string name );
	Bureaucrat( Bureaucrat const &src );
	Bureaucrat & operator=( Bureaucrat const &rhs );
	~Bureaucrat();

	std::string getName();
	int getRange();
	void incrementRange(int amount);
	void decrementRange(int amount);
};
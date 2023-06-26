/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:12:51 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/26 19:28:22 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Bureaucrat.hpp"
# include <iostream>

class Form {
private:
	const std::string _name;
	bool _signed;
	const int _sign_grade;
	const int _exec_grade;

public:
	Form();
	Form( std::string name, int sign_grade, int exec_grade );
	Form( Form& const ref );
	Form& operator=( Form& const ref );
	~Form();

	std::string getName() const;
	bool isSigned();
	int getSignGrade() const;
	int getExecGrade() const;

	
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

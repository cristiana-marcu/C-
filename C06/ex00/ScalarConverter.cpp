/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:31:53 by cristianama       #+#    #+#             */
/*   Updated: 2023/07/15 19:10:11 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &ref)
{
	*this = ref;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &literal)
{
	if (literal.length() == 1 && std::isprint(literal[0]))
		std::cout << "char: " << literal[0] << std::endl;
	else
		std::cout << "char: Non displayable or impossible" << std::endl;
	
	std::istringstream iSSInt(literal);
	int i;
	if (!(iSSInt >> i).fail())
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	std::istringstream iSSFloat(literal);
	float f;
	if (!(iSSFloat >> f).fail())
	{
		std::string rest;
		std::getline(iSSFloat, rest);
		if (rest.empty())
			std::cout << "float: " << f << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
	}
	else
		std::cout << "float: impossible" << std::endl;
	
	std::istringstream iSSDouble(literal);
	double d;
	if (!(iSSDouble >> d).fail())
	{
		std::string rest;
		std::getline(iSSDouble, rest);
		if (rest.empty())
			std::cout << "double: " << d << std::endl;
		else
			std::cout << "double: impossible" << std::endl;
	}
	else
		std::cout << "double: impossible" << std::endl;

}

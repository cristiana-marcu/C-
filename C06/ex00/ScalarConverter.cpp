/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:31:53 by cristianama       #+#    #+#             */
/*   Updated: 2023/07/15 19:57:41 by cristianama      ###   ########.fr       */
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
	std::string strNoSuffix = (literal[literal.size()-1] == 'f') ? literal.substr(0, literal.size() - 1) : literal;
	
	if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
		std::cout << "char: " << literal[0] << std::endl;
	else
	{
		double d;
		std::istringstream iSSChar(strNoSuffix); // strFloat se definió en el código anterior.
		if (!(iSSChar >> d).fail()) {
			// Comprobar que hemos llegado al final de la cadena.
			std::string rest;
			std::getline(iSSChar, rest);
			if (rest.empty()) {
				int i = static_cast<int>(d);
				if (i >= 32 && i <= 126) {
					std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
				} else {
					std::cout << "char: Non displayable" << std::endl;
				}
			} else {
				std::cout << "char: impossible" << std::endl;
			}
		} else {
			std::cout << "char: impossible" << std::endl;
		}

	}
	
	std::istringstream iSSInt(strNoSuffix);
	int i;
	if (!(iSSInt >> i).fail())
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	
	std::istringstream iSSFloat(strNoSuffix);
	float f;
	if (!(iSSFloat >> f).fail())
	{
		std::string rest;
		std::getline(iSSFloat, rest);
		if (rest.empty())
			std::cout << std::fixed << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
	}
	else
		std::cout << "float: impossible" << std::endl;
	
	std::istringstream iSSDouble(strNoSuffix);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:22:46 by cristianama       #+#    #+#             */
/*   Updated: 2023/07/15 19:01:02 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sstream>
#include <limits>
#include <string>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & ref);
		ScalarConverter& operator=(ScalarConverter const & rhs);
		~ScalarConverter();
		
	public:
		static void convert(const std::string &literal);
};
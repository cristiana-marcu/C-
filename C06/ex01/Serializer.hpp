/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:17:09 by cristianama       #+#    #+#             */
/*   Updated: 2023/07/16 21:49:40 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Data.hpp"

class Serializer {
	private:
		Serializer();
		~Serializer();
		Serializer(Serializer const & ref);
		Serializer & operator=(Serializer const & rhs);
	public:
		//It takes a pointer and converts it to the unsigned integer type uintptr_t.
		static uintptr_t serialize(Data* ptr);
		//It takes an unsigned integer parameter and converts it to a pointer to Data
		static Data* deserialize(uintptr_t raw);
};
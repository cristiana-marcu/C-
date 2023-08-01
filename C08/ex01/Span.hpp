/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:27:14 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/01 17:07:44 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

class Span {
	private:
		std::vector<int> _storage;
		unsigned int _size;
		
	public:
		Span();
		Span( unsigned int size );
		Span( Span const & ref );
		Span& operator=( Span const & rhs );
		~Span();

		void addNumber( int n );
		int shortestSpan();
		int longestSpan();

		class AlreadyFullException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Storage is already full."; };
		};

		class NoSpanFoundException : public std::exception {
			public:
				virtual const char* what() const throw() { return "No span found."; }
		};
};
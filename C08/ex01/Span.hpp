/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:27:14 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/01 22:52:34 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>

class Span {
	private:
		std::list<int> _storage;
		unsigned int _size;
		
		Span();
		
	public:
		Span( unsigned int size );
		Span( const Span & ref );
		Span& operator=( Span const & rhs );
		~Span();

		void addNumber( int n );
		void addRange( std::list<int>::const_iterator, std::list<int>::const_iterator );
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
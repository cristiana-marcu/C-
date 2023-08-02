/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:27:14 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/02 16:32:18 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

class Span {
	private:
		std::vector<int> _storage;
		unsigned int _size;
		
		Span();
		
	public:
		Span( unsigned int size );
		Span( const Span & ref );
		Span& operator=( Span const & rhs );
		~Span();

		void addNumber( int n );
		void addRange( std::vector<int>::const_iterator, std::vector<int>::const_iterator );
		int shortestSpan();
		int longestSpan();

		void printElements() const;

		class AlreadyFullException : public std::exception {
			public:
				virtual const char* what() const throw() { return "Storage is already full."; };
		};

		class NoSpanFoundException : public std::exception {
			public:
				virtual const char* what() const throw() { return "No span found."; }
		};
};
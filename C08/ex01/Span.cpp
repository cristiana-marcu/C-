/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:57:24 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/01 22:59:29 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int size ) : _size(size) {}

Span::Span( const Span & ref ) : _size(ref._size) {
	
	*this = ref;
}

Span& Span::operator=( Span const &rhs ) {
	if (this != &rhs) {
		this->_size = rhs._size;
		this->_storage = rhs._storage;
	}
	
	return *this;
}

Span::~Span() {}

void Span::addNumber( int n ) {
	if (_storage.size() > _size)
		throw Span::AlreadyFullException();
	_storage.push_back(n);
}

void Span::addRange( std::list<int>::const_iterator iBegin, std::list<int>::const_iterator iEnd ) {
	if (_storage.size() > _size)
		throw Span::AlreadyFullException();
	_storage.insert(_storage.end(), iBegin, iEnd);
}
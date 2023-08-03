/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:57:24 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/03 12:45:50 by cristianama      ###   ########.fr       */
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

void Span::addRange( std::vector<int>::const_iterator iBegin, std::vector<int>::const_iterator iEnd ) {
	while (iBegin != iEnd && _storage.size() < _size) {
		_storage.push_back(*iBegin);
		++iBegin;
	}
	if (_storage.size() > _size)
		throw Span::AlreadyFullException();
}

int Span::longestSpan( void ) {
	if (_storage.size() < 2)
		throw Span::NoSpanFoundException();
	
	int min = *std::min_element(_storage.begin(), _storage.end());
	int max = *std::max_element(_storage.begin(), _storage.end());
	return max-min;
}

int Span::shortestSpan( void ) {
	if (_storage.size() < 2)
		throw Span::NoSpanFoundException();
	
	std::vector<int> temp(_storage.begin(), _storage.end());
	std::sort(temp.begin(), temp.end());
	
	std::vector<int>::iterator it = temp.begin();
	int prev_value = *it;
	++it;
	int min_span = *it - prev_value;
	
	for (; it != temp.end(); ++it) {
		int current_value = *it;
		int span = current_value - prev_value;
		if (span < min_span)
			min_span = span;
		prev_value = current_value;
	}
	return min_span;
}

void Span::printElements() const {
    for (std::vector<int>::const_iterator i = _storage.begin(); i != _storage.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:57:24 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/01 17:00:19 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int size ) : _size(size) {
	_storage = 
}

Span::Span( Span const & ref ) : _size(ref._size) {
	
}
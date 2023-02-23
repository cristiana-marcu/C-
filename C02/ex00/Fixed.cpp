/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:36 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/23 22:41:49 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 ) {
    
    std::cout << "Default constructor called" << std::endl;

    return ; 
}

Fixed::Fixed( Fixed const & src ) {
    
    *this = src;
    std::cout << "Copy constructor called" << std::endl;

    return ;
}

Fixed::~Fixed( void ) {

    std::cout << "Destructor called" << std::endl;

    return ;
}

Fixed & Fixed::operator=( const Fixed & copy ) {
    
    if (&copy != this)
        this->_value = copy.getRawBits();  

    std::cout << "Assignation operator called" << std::endl;
    
    return *this;
}

int Fixed::getRawBits( void ) const {
    
    std::cout << "getRawBits member function called" << std::endl;
    
    return this->_value;
}

void Fixed::setRawBits( int const raw ) {
    
    this->_value = raw; 
}
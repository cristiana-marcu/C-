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

Fixed::Fixed( const int n ) {

    this->_value = n << this->_fractionalBits;

    std::cout << "Int constructor called" << std::endl;

    return ;
}

Fixed::Fixed( const float f ) {

    this->_value = std::roundf(f * (1 << this->_fractionalBits));  //probar a quitar roundf

    std::cout << "Float constructor called" << std::endl;

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
    
    std::cout << "Assignation operator called" << std::endl;
    if (&copy != this)
        this->_value = copy.getRawBits();  
    
    return *this;
}

int Fixed::getRawBits( void ) const {
    
    std::cout << "getRawBits member function called" << std::endl;
    
    return this->_value;
}

void Fixed::setRawBits( int const raw ) {
    
    this->_value = raw; 
}

float Fixed::toFloat( void ) const {

    return ((float)this->_value / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const {

    return (this->_value >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &n) {

    o << n.toFloat();
    return (o);
}
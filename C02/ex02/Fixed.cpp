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

    this->_value = std::roundf(f * (1 << this->_fractionalBits));

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

//Comparison operators
bool Fixed::operator>( const Fixed & rhs) const {
    
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<( const Fixed & rhs) const {
    
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=( const Fixed & rhs) const {
    
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=( const Fixed & rhs) const {
    
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==( const Fixed & rhs) const {
    
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=( const Fixed & rhs) const {
    
    return (this->getRawBits() != rhs.getRawBits());
}

//Arithmetic operators
Fixed Fixed::operator+( const Fixed & rhs ) {

    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-( const Fixed & rhs ) {

    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( const Fixed & rhs ) {

    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( const Fixed & rhs ) {

    return Fixed(this->toFloat() / rhs.toFloat());
}

//Increment and decrement
Fixed & Fixed::operator++( void ) {
    ++this->_value;

    return *this;
}

Fixed & Fixed::operator--( void ) {
    --this->_value;

    return *this;
}

Fixed Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._value = this->_value++;

    return tmp;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._value = this->_value--;

    return tmp;
}

//Min and max
Fixed & Fixed::min( Fixed & a, Fixed & b) {
    
    return a < b ? a : b;
}

Fixed & Fixed::max( Fixed & a, Fixed & b) {
    
    return a > b ? a : b;
}

const Fixed & Fixed::min( const Fixed & a, const Fixed & b) {
    
    return a < b ? a : b;
}

const Fixed & Fixed::max( const Fixed & a, const Fixed & b) {
    
    return a > b ? a : b;
}

std::ostream &operator<<(std::ostream &o, Fixed const &n) {

    o << n.toFloat();
    return (o);
}

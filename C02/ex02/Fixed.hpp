/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:57 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/23 22:39:30 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    
    Fixed( void );
    Fixed( const int n );
    Fixed( const float f );
    ~Fixed();
    
    Fixed( Fixed const & rhs );
    Fixed & operator=( Fixed const & rhs );

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;

    //Comparison operators
    bool operator>( const Fixed & rhs) const;
    bool operator<( const Fixed & rhs) const;
    bool operator>=( const Fixed & rhs) const;
    bool operator<=( const Fixed & rhs) const;
    bool operator==( const Fixed & rhs) const;
    bool operator!=( const Fixed & rhs) const;

    //Arithmetic operators
    Fixed operator+( const Fixed & rhs);
    Fixed operator-( const Fixed & rhs);
    Fixed operator*( const Fixed & rhs);
    Fixed operator/( const Fixed & rhs);

    Fixed & operator++( void );
    Fixed & operator--( void );
    Fixed operator++( int );
    Fixed operator--( int );

    //Min and max
    static Fixed & min( Fixed & a, Fixed & b);
    static Fixed & max( Fixed & a, Fixed & b);

    static const Fixed & min( const Fixed & a, const Fixed & b);
    static const Fixed & max( const Fixed & a, const Fixed & b);

};

std::ostream & operator<<( std::ostream & o, const Fixed & n);

#endif
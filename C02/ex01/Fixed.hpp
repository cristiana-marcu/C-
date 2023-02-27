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
    
    Fixed( Fixed const & src );
    Fixed & operator=( Fixed const & copy );

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & n);

#endif
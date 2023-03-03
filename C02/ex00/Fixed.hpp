/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:57 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/03 15:57:50 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed {
    
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    
    Fixed();
    ~Fixed();
    
    Fixed( Fixed const & rhs );
    Fixed & operator=( Fixed const & rhs );

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:57 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/23 22:02:21 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed {
    
private:
    int _value;
    static const int _fractional;

public:
    
    Fixed();
    ~Fixed();
    
    Fixed( Fixed const & src );
    Fixed & operator=( Fixed const & new );

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
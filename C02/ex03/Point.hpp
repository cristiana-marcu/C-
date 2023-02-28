/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:23:49 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/27 20:23:49 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class Point {
    
private:
    const Fixed _x;
    const Fixed _y;

public:
    
    Point( void );
    Point( const float x, const float y );
    Point( Point const & src );
    
    ~Point();
    
    Point & operator=( Point const & rhs );

    Fixed getX( void ) const;
    Fixed getY( void ) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point );

std::ostream & operator<<( std::ostream & o, const Fixed & n);

#endif
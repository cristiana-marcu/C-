/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:24:39 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/27 20:24:39 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {

    std::cout << "Default constructor called" << std::endl;

    return ;
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
    
    std::cout << "Float constructor called" << std::endl;

    return ;
}

Point::Point( Point const & src ) : _x(src.getX()), _y(src.getY()) { 

    //std::cout << "point Copy constructor called" << std::endl;

    return ;
}

Point::~Point( void ) {

}

Point & Point::operator=( Point const & rhs ) {

    if (this != &rhs) {
        (Fixed) this->_x = rhs.getX();
        (Fixed) this->_y = rhs.getY();
    }

    return *this;
}

Fixed Point::getX( void ) const {

    return this->_x;
}

Fixed Point::getY( void ) const {

    return this->_y;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:02 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/03 16:24:58 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "a is " << a.toFloat() << " as float" << std::endl;

    std::cout << "a raw is: " << a.getRawBits() << "" << std::endl;
    
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toFloat() << " as float" << std::endl;
    return 0;
    
}
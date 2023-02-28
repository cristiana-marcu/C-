/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:02 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/28 15:00:25 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

    Point const a(1, 1);
    std::cout << "Point X: " << a.getX() << std::endl;
    Point const b(6, 1);
    Point const c(3, 4);
    Point const point(3.25, 2.8764);
    Point const point2(7.0005, 2.8764);
    std::cout << "Point2 Y: " << point2.getY() << std::endl;
    Point const point3(3, 4);

    bool result = bsp(a, b, c, point);
    std::cout << "The point is in the triangle: " << result << std::endl;
    result = bsp(a, b, c, point2);
    std::cout << "The point is in the triangle: " << result << std::endl;
    result = bsp(a, b, c, point3);
    std::cout << "The point is in the triangle: " << result << std::endl;

    result = bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 10) );
    std::cout << "The point is in the triangle: " << result << std::endl;
    
    return 0;
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:02 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/28 18:42:23 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

    Point const f(1.0f, 1.0f);
    std::cout << "Point X: " << f.getX() << std::endl;
    Point const g(6.0f, 1.0f);
    Point const h(3.0f, 4.0f);
    Point const pointM(3.25f, 2.8764f);
    Point const point2(7.0005f, 2.8764f);
    std::cout << "Point2 Y: " << point2.getY() << std::endl;
    Point const point3(3.0f, 4.0f);

    bool result = bsp(f, g, h, pointM);
    std::cout << "The point is in the triangle: " << result << std::endl;
    result = bsp(f, g, h, point2);
    std::cout << "The point is in the triangle: " << result << std::endl;
    result = bsp(f, g, h, point3);
    std::cout << "The point is in the triangle: " << result << std::endl;

    result = bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 10) );
    std::cout << "The point is in the triangle: " << result << std::endl;
    
    return 0;
    
}
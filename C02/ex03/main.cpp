/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:02 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/28 19:25:46 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

    Point const f(1, 1);
    Point const g(6, 1);
    Point const h(3, 4);
    Point const pointM(3.25, 2.8764);
    Point const point2(7.0005, 2.8764);
    Point const point3(3, 4);

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
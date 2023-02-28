/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:32:02 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/28 14:29:20 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

    Point a(1, 1);
    Point b(6, 1);
    Point c(3, 4);
    Point point(3.25, 2.8764);
    Point point2(7.0005, 2.8764);
    Point point3(3, 4);

    bool result = bsp(a, b, c, point);
    std::cout << "The point is in the triangle: " << result << std::endl;
    result = bsp(a, b, c, point2);
    std::cout << "The point is in the triangle: " << result << std::endl;
    result = bsp(a, b, c, point3);
    std::cout << "The point is in the triangle: " << result << std::endl;
    return 0;
    
}
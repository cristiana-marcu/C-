/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:22:03 by cmarcu            #+#    #+#             */
/*   Updated: 2023/02/28 14:22:03 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed i) {
    if (i < 0)
        return i * -1;
    return i;
}

static Fixed area( Point const m, Point const n, Point const o) {
    Fixed v1x = n.getX() - m.getX();
    Fixed v1y = n.getY() - m.getY();
    Fixed v2x = o.getX() - m.getX();
    Fixed v2y = o.getY() - m.getY();
    Fixed crossedProduct = (v1x * v2y) - (v1y * v2x);

    return abs(crossedProduct / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point ) {

    Fixed abcArea = area(a, b, c);
    Fixed abpArea = area(a, b, point);
    Fixed bcpArea = area(b, c, point);
    Fixed acpArea = area(a, c, point);

    std::cout << "abcArea: " << abcArea << std::endl;
    std::cout << "abpArea: " << abpArea << std::endl;
    std::cout << "bcpArea: " << bcpArea << std::endl;
    std::cout << "acpArea: " << acpArea << std::endl;

    if (abcArea == 0 || abpArea == 0 || bcpArea == 0 || acpArea == 0)
        return false;
    return (abcArea == abpArea + bcpArea + acpArea);
}
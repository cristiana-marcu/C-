/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:39:07 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/23 16:02:06 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T aux = x;
	x = y;
	y = aux;
}

template<typename T>
T min(T const &x, T const &y)
{
	return ((x < y) ? x : y);
}

template<typename T>
T max(T const &x, T const y)
{
	return ((x > y) ? x : y);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:35:47 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/25 19:26:45 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>

template<typename T>
int easyfind(const T& container, int value)
{
	const int *p = std::find(std::begin(container), std::end(container), value);

	if (p != std::end(container))
		return *p;
	else
		throw (std::runtime_error("Value not found in container"));
}

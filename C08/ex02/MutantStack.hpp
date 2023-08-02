/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:44:09 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/02 18:32:50 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <deque>

template<typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
	private:
	public:
		MutantStack();
		MutantStack( const MutantStack &ref );
		MutantStack & operator=( const MutantStack &rhs );
		~MutantStack();

		typedef typename Container::iterator iterator;

		iterator begin();
		iterator end();
};

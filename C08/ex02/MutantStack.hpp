/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:44:09 by cristianama       #+#    #+#             */
/*   Updated: 2023/08/02 18:59:52 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <list>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack( void ){};
		MutantStack( const MutantStack &ref ) { *this = ref; };
		MutantStack & operator=( const MutantStack &rhs ) {
			std::stack<T, Container>::operator=(rhs);
			return *this;
		};
		~MutantStack() {};

		typedef typename Container::iterator iterator;

		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:39:07 by cmarcu            #+#    #+#             */
/*   Updated: 2023/07/23 18:27:10 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array {
	private:
		unsigned int _size;
		T* _p;

	public:
		Array()
		{
			_size = 0;
			_p = NULL;
		}

		Array(unsigned int n) : _size(n)
		{
			_p = new T[n];
			for (unsigned int i = 0; i < _size; i++)
				_p[i] = 0;
		}

		Array(Array const & ref) : _size(ref._size)
		{
			_p = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_p[i] = ref._p[i];
		}

		Array & operator=(Array const & rhs)
		{
			if (&rhs != this)
			{
				_size = rhs._size;
				delete [] _p;
				_p = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_p[i] = rhs._p[i];
			}
			return *this;
		}

		~Array()
		{
			delete [] _p;
		}

		unsigned int size() { return _size; }

};

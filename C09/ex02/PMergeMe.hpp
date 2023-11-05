/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:58:21 by cristianama       #+#    #+#             */
/*   Updated: 2023/11/05 15:24:46 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include <iterator>


class PmergeMe {
private:
	static const int K = 5;
	std::vector<int> vec;
	std::list<int> lst;

	// Private helper functions for sorting
	void insertionSort(std::vector<int>& A, int p, int r);
	void insertionSort(std::list<int>::iterator p, std::list<int>::iterator r);
	void merge(std::vector<int>& A, int p, int q, int r);
	void merge(std::list<int>::iterator p, std::list<int>::iterator q, std::list<int>::iterator r);
	void sort(std::vector<int>& A, int p, int r);
	void sort(std::list<int>& A, std::list<int>::iterator p, std::list<int>::iterator r);

public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	int validData(int argc, char* argv[]);
	void displayAndSort();
};


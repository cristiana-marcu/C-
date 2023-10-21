/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:58:21 by cristianama       #+#    #+#             */
/*   Updated: 2023/10/21 20:27:48 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include <iterator>


class PMergeMe {
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
    PMergeMe();  // Default constructor
    PMergeMe(const PMergeMe& other);  // Copy constructor
    PMergeMe& operator=(const PMergeMe& other);  // Assignment operator
    ~PMergeMe();  // Destructor

    int validData(int argc, char* argv[]);
    void displayAndSort();
};


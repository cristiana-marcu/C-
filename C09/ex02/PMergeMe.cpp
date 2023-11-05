/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:51:59 by cristianama       #+#    #+#             */
/*   Updated: 2023/11/05 16:11:33 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) : vec(other.vec), lst(other.lst) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        vec = other.vec;
        lst = other.lst;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

int PmergeMe::validData(int argc, char *argv[])
{
	vec.clear();
	lst.clear();

	// Parse command line arguments and store in containers
	for (int i = 1; i < argc; i++) {
		int value = atoi(argv[i]);
		if (value <= 0) { // 0 is not a positive integer so it's not allowed here
			std::cout << "Error" << std::endl;
			return 0;
		}
		vec.push_back(value);
		lst.push_back(value);
	}

	// Display the unsorted sequence
	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	return 1;
}

void PmergeMe::displayAndSort()
{
	// Sort using std::vector and measure time
	clock_t start = clock();
	sort(vec, 0, vec.size() - 1);
	clock_t end = clock();
	double vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	// Display sorted sequence
	std::cout << "After: ";
	for (size_t i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << "\nTime to process a range of " << vec.size() << " elements with std::vector: " << vecTime << " us" << std::endl;

	// Sort using std::list and measure time
	start = clock();
	sort(lst, lst.begin(), lst.end());
	end = clock();
	double lstTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	// Loop for printing sorted list elements to check it's the same as vector
	// for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
	//     std::cout << *it << " ";
	// }
	std::cout << "Time to process a range of " << lst.size() << " elements with std::list: " << lstTime << " us" << std::endl;

}

// Insertion sort for std::vector
void PmergeMe::insertionSort(std::vector<int>& A, int p, int r) {
	for (int i = p; i < r; i++) {
		int tempVal = A[i + 1];
		int j = i + 1;
		while (j > p && A[j - 1] > tempVal) {
			A[j] = A[j - 1];
			j--;
		}
		A[j] = tempVal;
	}
}

// Insertion sort for std::list
void PmergeMe::insertionSort(std::list<int>::iterator p, std::list<int>::iterator r) {
	std::list<int>::iterator i, j;
	int tempVal;
	for (i = p; i != r; ++i) {
		tempVal = *i;
		j = i;
		while (j != p && *(std::prev(j)) > tempVal) {
			*j = *(std::prev(j));
			--j;
		}
		*j = tempVal;
	}
}

// Merge function for std::vector
void PmergeMe::merge(std::vector<int>& A, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	std::vector<int> LA(A.begin() + p, A.begin() + q + 1);
	std::vector<int> RA(A.begin() + q + 1, A.begin() + r + 1);
	int RIDX = 0, LIDX = 0;
	for (int i = p; i <= r; i++) {
		if (RIDX == n2) {
			A[i] = LA[LIDX++];
		} else if (LIDX == n1) {
			A[i] = RA[RIDX++];
		} else if (RA[RIDX] > LA[LIDX]) {
			A[i] = LA[LIDX++];
		} else {
			A[i] = RA[RIDX++];
		}
	}
}

// Merge function for std::list
void PmergeMe::merge(std::list<int>::iterator p, std::list<int>::iterator q, std::list<int>::iterator r) {
	std::list<int> LA(p, q);
	std::list<int> RA(q, r);
	std::list<int>::iterator lit = LA.begin(), rit = RA.begin();
	for (std::list<int>::iterator it = p; it != r; ++it) {
		if (lit == LA.end()) {
			*it = *rit++;
		} else if (rit == RA.end() || *lit <= *rit) {
			*it = *lit++;
		} else {
			*it = *rit++;
		}
	}
}

// Sort function for std::vector
void PmergeMe::sort(std::vector<int>& A, int p, int r) {
	if (r - p > K) {
		int q = (p + r) / 2;
		sort(A, p, q);
		sort(A, q + 1, r);
		merge(A, p, q, r);
	} else {
		insertionSort(A, p, r);
	}
}

// Sort function for std::list
void PmergeMe::sort(std::list<int>& A, std::list<int>::iterator p, std::list<int>::iterator r) {
	if (std::distance(p, r) > K) {
		std::list<int>::iterator q = p;
		std::advance(q, std::distance(p, r) / 2);
		sort(A, p, q);
		sort(A, q, r);
		merge(p, q, r);
	} else {
		insertionSort(p, r);
	}
}
 
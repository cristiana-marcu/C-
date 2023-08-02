/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:37:46 by cmarcu            #+#    #+#             */
/*   Updated: 2023/08/02 16:30:21 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ( void )
{
	std::vector<int> rands(100);
	std::srand(time(NULL));
	std::generate(rands.begin(), rands.end(), std::rand);
	
	Span sp(rands.size());
	try {
		sp.addRange(rands.begin(), rands.end());
	} catch (Span::AlreadyFullException &e) {
		std::cout << "Couldn't add all numbers: " << e.what() << std::endl;
	}

	sp.printElements();

	try {
		int max_span = sp.longestSpan();
		int min_span = sp.shortestSpan();

		std::cout << "Max span in vector is: " << max_span << std::endl;
		std::cout << "Min span in vector is: " << min_span << std::endl;
	} catch (Span::NoSpanFoundException &e) {
		std::cout << "Not enough numbers in storage: " << e.what() << std::endl;
	}

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:51:33 by cristianama       #+#    #+#             */
/*   Updated: 2023/10/21 20:17:59 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Error: Please provide a sequence of positive integers." << std::endl;
        return 1;
    }
	
	PMergeMe sorter;
    if (!sorter.validData(argc, argv)) return 1;
    sorter.displayAndSort();
	
    return 0;
}

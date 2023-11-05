/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:53:56 by cristianama       #+#    #+#             */
/*   Updated: 2023/11/05 15:18:13 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: " << argv[0] << " \"expression\"" << std::endl;
		return 1;
	}

	RPN rpn;
	int result = rpn.eval(argv[1]);
	if (result == -1) {
		std::cout << "Error" << std::endl;
	} else {
		std::cout << result << std::endl;
	}

	return 0;
}
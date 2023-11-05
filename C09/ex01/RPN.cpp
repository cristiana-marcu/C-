/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:54:16 by cristianama       #+#    #+#             */
/*   Updated: 2023/11/05 15:17:57 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) : s(other.s) {}

RPN& RPN::operator=(const RPN& other) {
	if (this != &other) {
		s = other.s;
	}
	return *this;
}

int RPN::eval(const std::string &exp) {
	std::stringstream ss(exp);
	std::string token;

	while (!s.empty()) {
		s.pop();
	}

	while (ss >> token) {
		if (token == "+") {
			if (s.size() < 2) return -1; // Error
			int b = s.top(); s.pop();
			int a = s.top(); s.pop();
			s.push(a + b);
		} else if (token == "-") {
			if (s.size() < 2) return -1; // Error
			int b = s.top(); s.pop();
			int a = s.top(); s.pop();
			s.push(a - b);
		} else if (token == "*") {
			if (s.size() < 2) return -1; // Error
			int b = s.top(); s.pop();
			int a = s.top(); s.pop();
			s.push(a * b);
		} else if (token == "/") {
			if (s.size() < 2) return -1; // Error
			int b = s.top(); s.pop();
			if (b == 0) return -1; // Divide by zero error
			int a = s.top(); s.pop();
			s.push(a / b);
		} else { // Number or invalid token
			try {
				int num = std::stoi(token);
				if (num >= 0 && num < 10) {
					s.push(num);
				} else {
					return -1;
				}
			} catch (const std::invalid_argument&) {
				return -1;
			}
		}
	}

	if (s.size() != 1) return -1;
	return s.top();
}
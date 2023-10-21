/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:54:16 by cristianama       #+#    #+#             */
/*   Updated: 2023/10/21 17:13:01 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int RPN::eval(const std::string &exp) {
	std::stack<int> s;
    std::stringstream ss(exp);
    std::string token;

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
                    return -1; // Invalid number
                }
            } catch (const std::invalid_argument&) {
                return -1; // Invalid token
            }
        }
    }

    if (s.size() != 1) return -1; // Error
    return s.top();
}
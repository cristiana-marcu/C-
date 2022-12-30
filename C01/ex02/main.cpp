/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:10:54 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 13:20:05 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    
    std::string     str = "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;
    
    std::cout << "The memory address of the string variable: "  << &str << std::endl;       //0x7ffee8909840
    std::cout << "The memory address held by stringPTR: "       << stringPTR << std::endl;  //0x7ffee8909840
    std::cout << "The memory address held by stringREF: "       << &stringREF << std::endl; //0x7ffee8909840

    std::cout << "The value of the string variable: "   << str << std::endl;        //"HI THIS IS BRAIN"
    std::cout << "The value pointed to by stringPTR: "  << *stringPTR << std::endl; //"HI THIS IS BRAIN"
    std::cout << "The value pointed to by stringREF: "  << stringREF << std::endl;  //"HI THIS IS BRAIN"
    
    return 0;
}
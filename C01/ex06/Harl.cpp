/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:31:36 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/03 14:16:59 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*print) ( void );

void Harl::debug( void ) {
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
    
    std::string messages[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*memberFunctions[4]) ( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   
    int i = 0; 
    while (i < 4)
    {
        if (level == messages[i])
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*memberFunctions[0])();
        case 1:
            (this->*memberFunctions[1])();
        case 2:
            (this->*memberFunctions[2])();
        case 3:
            (this->*memberFunctions[3])();
            break;
        default:
            std::cout << "Something went wrong" << std::endl;
    }
}


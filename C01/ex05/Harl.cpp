/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:31:36 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/03 13:31:57 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*print) ( void );

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
    /*Un poco de apuntes de punteros a métodos de clases
    //Forma 1
    void (Harl::*pepe) ( void );
    pepe = &Harl::debug;
    (this->*pepe)();

    //Forma 2
    print jose = &Harl::debug;
    print crisi = &Harl::info;
    (this->*jose)();
    (this->*crisi)();
    //(Harl::*jose)();  //Esto no funciona porque this se refiere a la instancia
    //de la clase que invoque a este método (el objeto en concreto) mientras que
    //Harl::*jose() se refiere a un atributo de la clase Harl que no existe
    */

    std::string messages[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*memberFunctions[4]) ( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
        if (level == messages[i])
            (this->*memberFunctions[i])();
}


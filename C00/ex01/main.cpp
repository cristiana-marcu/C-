/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:17:40 by cmarcu            #+#    #+#             */
/*   Updated: 2022/11/24 20:36:23 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void toupper_string(std::string str)
{
    size_t len;
    
    len = str.length();
    for (size_t j = 0; j < len; j++)
        str[j] = char(std::toupper(str[j]));
    //Quizás haya que devolver el str cambiado por ambito de variable?
}



int main(void)
{
    std::string command;
    //funcion para leer linea?
    //int para contar cuántas veces llevas llamando a ADD?
    int add_count;
    PhoneBook phone_book;
    
    add_count = 0;
    while(1)
    {
        std::cout << "Type a command (ADD, SEARCH or EXIT)";
        std::cin >> command;
        toupper_string(command);
        
        if (command == "ADD")
        {
            //funcion add()
            phone_book.add(++add_count);
        }
        else if (command == "SEARCH")
        {
            //funcion search()
            std::cout << "----id----|---name---|-lastname-|-nickname-" << std::endl;
            for (int i = 0; i <= add_count; i++)
            {
                std::cout << 
                
            }
            
            std::cout << "----------|----------|----------|----------" << std::endl;
            phone_book.search();
        }
        else if (command == "EXIT")
        {
            //break; ??
        }
        else
            std::cout << "Type a valid command (ADD, SEARCH or EXIT)";
    }

    return (0);
}
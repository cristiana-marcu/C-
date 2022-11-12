/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:17:40 by cmarcu            #+#    #+#             */
/*   Updated: 2022/11/12 15:10:57 by cmarcu           ###   ########.fr       */
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
    std::string input;
    //funcion para leer linea?
    //int para contar cuántas veces llevas llamando a ADD?
    int add_count;
    PhoneBook phone_book;
    
    add_count = 0;
    while(1)
    {
        std::cout << "Type a command (ADD, SEARCH or EXIT)";
        std::cin >> input;
        toupper_string(input);
        
        if (input == "ADD")
        {
            //funcion add()
            phone_book.add(++add_count);
        }
        else if (input == "SEARCH")
        {
            //funcion search()
            phone_book.search();
        }
        else if (input == "EXIT")
        {
            //break; ??
        }
        else
            std::cout << "Type a valid command (ADD, SEARCH or EXIT)";
    }

    return (0);
}
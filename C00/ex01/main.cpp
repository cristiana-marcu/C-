/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:17:40 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/01 17:36:35 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

void toupper_string(std::string str)
{
    size_t len;
    
    len = str.length();
    for (size_t j = 0; j < len; j++)
        str[j] = char(std::toupper(str[j]));
    //Quizás haya que devolver el str cambiado por ambito de variable?
}

void search(PhoneBook book)
{
    //Imprimir lo que ya haya dentro formateado
    std::cout << "index     |firstname |lastname  |nickname  " << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        Contact contact = book.getContact(i);
        // if (contact.getFirstName() == "")
        //     break;
        std::cout << contact.truncateAttribute(contact.getFirstName()) << std::setfill(' ') << std::setw(10) << std::left << "|";
        std::cout << contact.truncateAttribute(contact.getLastName()) << std::setfill(' ') << std::setw(10) << std::left << "|";
    }
    //Pedir indice para buscar e imprimir info detallada
    int index;
    std::cout << "Please provide index between 0 and 7 to see contact info: " << std::endl;
    std::cin >> index;
    Contact contact = book.getContact(index);
    contact.printContactInfo();     
}

void add(PhoneBook phone_book, int index)
{
    std::string line;
    Contact contact = phone_book.getContact(index);
    
    std::cout << "Enter first name: " << std::endl;
    getline(std::cin, line);
    contact.setFirstName(line);
    std::cout << "Enter last name: " << std::endl;
    getline(std::cin, line);
    contact.setLastName(line);
    std::cout << "Enter nickname: " << std::endl;
    getline(std::cin, line);
    contact.setNickname(line);
    std::cout << "Enter phone number: " << std::endl;
    getline(std::cin, line);
    contact.setPhoneNumber(line);
    std::cout << "Enter darkest secret: " << std::endl;
    getline(std::cin, line);
    contact.setDarkestSecret(line);
}

int main(void)
{
    std::string command;
    int add_count;
    PhoneBook phone_book;
    
    add_count = 0;
    while(1)
    {
        std::cout << "Type a command (ADD, SEARCH or EXIT)";
        std::cin >> command;
        toupper_string(command);
        
        if (command == "ADD")
            add(phone_book, add_count++);
        else if (command == "SEARCH")
            search(phone_book);
        else if (command == "EXIT")
            break;
        else
            std::cout << "Type a valid command (ADD, SEARCH or EXIT)";
    }

    return (0);
}
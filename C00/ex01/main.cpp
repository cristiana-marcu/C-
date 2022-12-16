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

void toupper_string(std::string &str)
{
    size_t len;
    
    len = str.length();
    for (size_t j = 0; j < len; j++)
        str[j] = char(std::toupper(str[j]));
}

void search(PhoneBook book)
{
    if (!book.getTotalContacts())
    {
        std::cout << "No contacts yet." << std::endl;
        return ;
    }
    std::cout << "index     |firstname |lastname  |nickname  " << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 0; i < book.getTotalContacts(); i++)
    {
        Contact contact = book.getContact(i);
        std::cout << std::setw(10) << std::left << i                                                 << "|";
        std::cout << std::setw(10) << std::left << contact.truncateAttribute(contact.getFirstName()) << "|";
        std::cout << std::setw(10) << std::left << contact.truncateAttribute(contact.getLastName())  << "|";
        std::cout << std::setw(10) << std::left << contact.truncateAttribute(contact.getNickname())  << std::endl;
    }
    int index;
    std::cout << "Please provide index between 0 and 7 to see contact info: " << std::endl;
    std::cin >> index;
    //TODO> igual no tiene que se run while, leer subject
    while (!std::isdigit(index) || index < 0 || index >= book.getTotalContacts()) //TODO: chequear que no metan no ints
    {
        std::cout << "Please provide valid index: " << std::endl;
        std::cin.clear();
        std::cin >> index;
    }
    Contact contact = book.getContact(index);
    contact.printContactInfo();     
}

Contact add()
{
    std::string line;
    Contact contact;
    
    std::cout << "Enter first name: " << std::endl;
    getline(std::cin >> std::ws, line);
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

    return (contact);
}

int main(void)
{
    std::string command;
    PhoneBook phone_book;

    while(1)
    {
        std::cout << "Type a command (ADD, SEARCH or EXIT)";
        std::cin >> command;
        toupper_string(command);
        
        if (command == "ADD")
            phone_book.addContact(add());
        else if (command == "SEARCH")
            search(phone_book);
        else if (command == "EXIT")
            break;
        else
            std::cout << "Sorry, didn't get you. ";
    }

    return (0);
}
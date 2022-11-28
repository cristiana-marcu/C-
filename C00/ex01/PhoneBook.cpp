/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:42:36 by cmarcu            #+#    #+#             */
/*   Updated: 2022/11/28 20:40:39 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Write a program that behaves like a crappy awesome phonebook software. 
Please take some time to give your executable a relevant name. 
When the program starts, the user is prompted for input: 
you should accept the ADD command, the SEARCH command or the EXIT command.
Any other input is discarded.
The program starts empty (no contacts), doesn’t use any dynamic allocation, and
can’t store more than 8 contacts. If a ninth contact is added, replace the oldest contact.

If the command is EXIT:
    ◦ The program quits and the contacts are lost forever.
    __ Llamar destructores?? __

• Else if the command is ADD:
    ◦ The program will prompt the user to input a new contact’s information, one
field at a time, until every field is accounted for.
        __ Enter first name:
        __ Enter last name:
        __ Enter nickname:
        __ Enter phone number:
        __ Enter darkest secret:
    ◦ A contact is defined by the following fields: first name, last name, nickname,
phone number,darkest secret.
    ◦ The PhoneBook must be represented as an instance of a class in your code
it must contain an array of contact.
        __ un atributo que sea Contact contacts[8]
    ◦ A contact MUST be represented as an instance of a class in your code. You’re
free to design the class as you like, but the peer evaluation will check the
consistency of your choices. Go look at today’s videos again if you don’t
understand what I mean (and I don’t mean "use everything" before you ask).

• Else if the command is SEARCH:
    ◦ The program will display a list of the available non-empty contacts in 4
columns: index, first name, last name and nickname.
    ◦ Each column must be 10 chars wide, right aligned and separated by a ’|’
character. Any output longer than the columns’ width is truncated and the
last displayable character is replaced by a dot (’.’).
    ◦ Then the program will prompt again for the index of the desired entry and
displays the contact’s information, one field per line. If the input makes no
sense, define a relevant behavior.
• Else the input is discarded.

When a command has been correctly executed, the program waits for another ADD or
SEARCH command until an EXIT command.

*/

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
    std::cout << "hi";
}

Contact PhoneBook::getContact(int index)
{
    return this->contacts[index];
}

void PhoneBook::search()
{
    //Imprimir lo que ya haya dentro formateado
    std::cout << "--index---|firstname-|-lastname-|-nickname-" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        Contact contact = getContact(i);
        //std::cout << i << "         |" << contact.getFirstName //look for truncate
    }
    //Pedir indice para buscar e imprimir info detallada
}

// void add(int index)
// {
//     //Menudo lío que tengo tú haha
// }

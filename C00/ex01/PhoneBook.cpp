/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:42:36 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/01 17:35:13 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    //std::cout << "hi";
}

Contact PhoneBook::getContact(int index)
{
    return this->contacts[index];
}

void PhoneBook::addContact(Contact contact)
{
    if (this->total_of_contacts < 8)
    {
        this->contacts[this->total_of_contacts] = contact;
        this->total_of_contacts++;
    }
    else
    {
        this->contacts[this->oldest_contact] = contact;
        this->oldest_contact++;
    }
    if (PhoneBook::getOldestContact() > 7)
        PhoneBook::setOldestContact(0);
}

void PhoneBook::setTotalContacts(int n)
{
    this->total_of_contacts = n;
}

int PhoneBook::getTotalContacts()
{
    return this->total_of_contacts;
}

void PhoneBook::setOldestContact(int n)
{
    this->oldest_contact = n;
}

int PhoneBook::getOldestContact()
{
    return this->oldest_contact;
}
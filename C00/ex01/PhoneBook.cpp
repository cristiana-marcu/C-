/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:42:36 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/27 19:30:26 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_total_of_contacts = 0;
    this->_oldest_contact = 0;
}

Contact PhoneBook::getContact(int index)
{
    return this->_contacts[index];
}

void PhoneBook::addContact(Contact contact)
{
    if (this->_total_of_contacts < 8)
    {
        this->_contacts[this->_total_of_contacts] = contact;
        this->_total_of_contacts++;
    }
    else
    {
        this->_contacts[this->_oldest_contact] = contact;
        this->_oldest_contact++;
    }
    if (PhoneBook::getOldestContact() > 7)
        PhoneBook::setOldestContact(0);
}

void PhoneBook::setTotalContacts(int n)
{
    this->_total_of_contacts = n;
}

int PhoneBook::getTotalContacts()
{
    return this->_total_of_contacts;
}

void PhoneBook::setOldestContact(int n)
{
    this->_oldest_contact = n;
}

int PhoneBook::getOldestContact()
{
    return this->_oldest_contact;
}
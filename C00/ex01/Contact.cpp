/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:13 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/01 17:39:03 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"


Contact::Contact()
{
    std::cout << "ho";
}

void Contact::setFirstName(std::string name)
{
    this->firstName = name;
}

std::string Contact::getFirstName()
{
    return this->firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

std::string Contact::getLastName()
{
    return this->lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;    
}

std::string Contact::getNickname()
{
    return this->nickname;
}

void Contact::setPhoneNumber(std::string phone)
{
    this->phoneNumber = phone;    
}

std::string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

void Contact::setDarkestSecret(std::string secret)
{
    this->darkestSecret = secret;    
}

std::string Contact::getDarkestSecret()
{
    return this->darkestSecret;
}

std::string Contact::truncateAttribute(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 8) + ".");
    return str;    
}

void Contact::printContactInfo()
{
    std::cout << "First name: " << this->getFirstName() << std::endl;
    std::cout << "Last name: " << this->getLastName() << std::endl;
    std::cout << "Nickname: " << this->getNickname() << std::endl;
    std::cout << "Phone number: " << this->getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << this->getDarkestSecret() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:13 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/27 19:29:17 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void Contact::setFirstName(std::string name)
{
    this->_firstName = name;
}

std::string Contact::getFirstName()
{
    return this->_firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

std::string Contact::getLastName()
{
    return this->_lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;    
}

std::string Contact::getNickname()
{
    return this->_nickname;
}

void Contact::setPhoneNumber(std::string phone)
{
    this->_phoneNumber = phone;    
}

std::string Contact::getPhoneNumber()
{
    return this->_phoneNumber;
}

void Contact::setDarkestSecret(std::string secret)
{
    this->_darkestSecret = secret;    
}

std::string Contact::getDarkestSecret()
{
    return this->_darkestSecret;
}

std::string Contact::truncateAttribute(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
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
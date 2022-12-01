/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:52 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/01 17:38:54 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {

private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;    

public:

    Contact();
    
    void setFirstName(std::string name);
    std::string getFirstName();
    
    void setLastName(std::string lastName);
    std::string getLastName();
    
    void setNickname(std::string nickname);
    std::string getNickname();

    void setPhoneNumber(std::string phone);
    std::string getPhoneNumber();

    void setDarkestSecret(std::string secret);
    std::string getDarkestSecret();

    std::string truncateAttribute(std::string str);
    
    void printContactInfo();
};

#endif
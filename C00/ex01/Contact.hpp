/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:52 by cmarcu            #+#    #+#             */
/*   Updated: 2022/11/22 15:54:42 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
    void getFirstName();
    //Getters y setters para todos los atributos y desarrollarlos en el .cpp ¿?
    void setLastName(std::string lastName);
    void getLastName();
    
    void setNickname(std::string nickname);
    void getNickname();

    void setPhoneNumber(std::string phone);
    void getPhoneNumber();

    void setDarkestSecret(std::string secret);
    void getDarkestSecret();
};
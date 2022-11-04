/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:16:52 by cmarcu            #+#    #+#             */
/*   Updated: 2022/11/03 20:36:42 by cmarcu           ###   ########.fr       */
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
    
    int setFirstName(std::string name);
    int getFirstName();
    //Getters y setters para todos los atributos y desarrollarlos en el .cpp ¿?
        
};
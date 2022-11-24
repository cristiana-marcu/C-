/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:54:22 by cmarcu            #+#    #+#             */
/*   Updated: 2022/11/24 20:49:08 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class PhoneBook {
    
private:
    Contact contacts[8];
    
public:

    void search();
    void addContact(Contact contact);
    void showContactInfo(int index);
    
};
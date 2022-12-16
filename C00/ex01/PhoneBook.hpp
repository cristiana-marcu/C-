/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:54:22 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/01 17:35:09 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {
    
private:
    Contact contacts[8];
    int total_of_contacts = 0; 
    int oldest_contact = 0;
    
public:

    PhoneBook();

    Contact getContact(int index);
    void addContact(Contact contact);
    void showContactInfo(int index);

    void setTotalContacts(int n);
    int getTotalContacts();

    void setOldestContact(int n);
    int getOldestContact();
};

#endif
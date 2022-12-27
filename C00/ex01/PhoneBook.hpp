/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:54:22 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/27 19:29:38 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {
    
private:
    Contact _contacts[8];
    int _total_of_contacts; 
    int _oldest_contact;
    
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
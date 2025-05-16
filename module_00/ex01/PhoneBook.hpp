/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:04 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/16 14:32:08 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook 
{
    private:
        Contact _contacts[MAX_CONTACTS]; //array of strings/ contacts
        int     _addCount; // tracks the number of added contacts
        void    _printTable(); // prints the table in seaching

    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(); //funtion to add a contact info
        void searchContacts(); //function to search contacts
};

#endif
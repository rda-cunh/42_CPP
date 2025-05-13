/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:04 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/13 19:34:40 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "header.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
    private:
        Contact contact[MAX_CONTACTS];
        int nextIndex; // keeps the index of the contact
        int totalContacts; //keeps the total number of contacts

    public:
        void startContacts(); // starts the contacts
        void addContact(); //funtion to add a contact info
        void searchContacts() const; //function to search contacts
};

#endif
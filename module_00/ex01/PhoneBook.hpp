/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:04 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/14 01:17:04 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "header.hpp"

#define MAX_CONTACTS 8

class PhoneBook 
{
    private:
        Contact _contacts[MAX_CONTACTS]; //array of strings
        int     _id; // keeps the id of the contact
        void    _printtable();

    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(); //funtion to add a contact info
        void searchContacts() const; //function to search contacts
};

#endif
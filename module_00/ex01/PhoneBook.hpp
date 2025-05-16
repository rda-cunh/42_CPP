/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:04 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/16 01:16:12 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "header.hpp"

#define MAX_CONTACTS 8

class PhoneBook 
{
    private:
        Contact _contacts[MAX_CONTACTS]; //array of strings/ contacts
        int     _addCount; // tracks the number of added contacts
        void    _prinTable(); // I believe i will need to print the table somehow (check later if it's needed and if bust be public or private)

    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(); //funtion to add a contact info
        void searchContacts() const; //function to search contacts

};

#endif
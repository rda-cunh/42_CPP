/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:04 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/13 00:31:02 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "header.hpp"

class PhoneBook {
    private:
        Contact contacts[MaxId];
        int nextIndex; // keeps the index for the next contact
        int totalContacts; //keeps the total number of contacts

    public:
        void addContact() //funtion to add a contact
        void searchContacts() //function to search contacts
};

#endif
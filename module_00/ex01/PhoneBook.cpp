/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/13 19:37:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::startContacts()
{
    for(int i = 0; i < MAX_CONTACTS; i++)
    {
        contact[i].startContact(); 
    }
}

void PhoneBook::addContact() 
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    if (nextIndex == MAX_CONTACTS)
        nextIndex == 0;
    
    std::cout << "Enter a command: ";

}
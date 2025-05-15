/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/14 01:13:39 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    _addCount = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    int contact_id;

    std::cout << CLEAR;
    std::cout << "**********************************" << std::endl;
	std::cout << "*           ADD CONTACT          *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
    std::cout << "Type the contact informations:" << std::endl << std::endl;
	std::cout << "First name: ";
    std::getline(std::cin, firstName);
    std::cout << "Last name: ";
    std::getline(std::cin, lastName);
    // ...
    //condition to check if any of the inputs is not empty. If empty print a message and return.

    _contacts[_addCount++ % 8] = setContact(firstName, lastName, nickname, phoneNumber, darkestSecretcret);

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/15 20:11:09 by rda-cunh         ###   ########.fr       */
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
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret); 

    if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty())
    {
        std::cout << std::endl << "Contact cannot have an empty field. Press ENTER to continue" << std::endl;
        std::cin.ignore();
        return ;        
    }

    _contacts[_addCount++ % 8] = setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);

}
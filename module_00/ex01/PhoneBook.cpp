/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/16 13:42:14 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

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
    int current_id;

    std::cout << CLEAR;
    std::cout << "**********************************" << std::endl;
	std::cout << "*           ADD CONTACT          *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
    std::cout << "Type the contact informations bellow:" << std::endl << std::endl;
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

    if (firstName.empty() || lastName.empty() || nickname.empty() \
        || phoneNumber.empty() || darkestSecret.empty())
    {
        std::cout << std::endl << "Contact cannot have an empty field. Press ENTER to continue" << std::endl;
        std::cin.ignore();
        return ;        
    }

    _contacts[_addCount++ % 8].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    current_id = _addCount % 8 == 0 ? 8 : _addCount % 8;

    if (_addCount > 8)
        std::cout << "Contact added to position " << current_id << " (old contact overwritten)" << std::endl;
    else
        std::cout << "Contact added to position " << current_id << std::endl;
    std::cout << "Press ENTER to continue" << std::endl;
    std::cin.ignore();
}

void PhoneBook::_printTable()
{
    std::string str;

    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (!_contacts[i].getFirstName().empty())
        {
            std::cout << "|" << std::setw(10) << i + 1 << "|";
            str = _contacts[i].getFirstName();
            std::cout << std::setw(10) << Contact::formatWidth(str) << "|";
            str = _contacts[i].getLastName();
            std::cout << std::setw(10) << Contact::formatWidth(str) << "|";
            str = _contacts[i].getNick();
            std::cout << std::setw(10) << Contact::formatWidth(str) << "|" << std::endl; 
        }      
    }
    std::cout << std::endl;
}

void PhoneBook::searchContacts() const
{
    std::string input; 

    std::cout << CLEAR;
    std::cout << "**********************************" << std::endl;
	std::cout << "*          SEARCH CONTACT        *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;

    if (_addCount == 0)
    {
        std::cout << "No contacts on the Phone Book yet." << std::endl;
        std::cout << "Press ENTER to continue." << std::endl;
        std::cin.ignore();
        return ;
    }
    _printTable();

    std::cout << "Available commands: " << std::endl;
    std::cout << "  [index number] " << std::endl;
    std::cout << "  BACK " << std::endl << std::endl;
    
           
    
}
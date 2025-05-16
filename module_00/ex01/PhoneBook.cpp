/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:26:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/16 19:35:26 by rda-cunh         ###   ########.fr       */
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
    std::cout << "*********************************************" << std::endl;
	std::cout << "*                ADD CONTACT                *" << std::endl;
	std::cout << "*********************************************" << std::endl << std::endl;
    std::cout << "Type the contact informations bellow:" << std::endl << std::endl;
	std::cout << "First name: ";
    if (!std::getline(std::cin, firstName))
        return ;
    std::cout << "Last name: ";
    if (!std::getline(std::cin, lastName))
        return ;
    std::cout << "Nickname: ";
    if (!std::getline(std::cin, nickname))
        return ;
    std::cout << "Phone number: ";
    if (!std::getline(std::cin, phoneNumber))
        return ;
    std::cout << "Darkest secret: ";
    if (!std::getline(std::cin, darkestSecret))
        return ;
    std::cout << std::endl; 
    if (firstName.empty() || lastName.empty() || nickname.empty() \
        || phoneNumber.empty() || darkestSecret.empty())
    {
        std::cout << std::endl << "A contact cannot have an empty field." << std::endl;
		std::cout << "Press ENTER to continue." << std::endl;
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
            std::cout << std::setw(10) << std::right << Contact::formatWidth(str) << "|";
            str = _contacts[i].getLastName();
            std::cout << std::setw(10) << std::right << Contact::formatWidth(str) << "|";
            str = _contacts[i].getNick();
            std::cout << std::setw(10) << std::right << Contact::formatWidth(str) << "|" << std::endl; 
        }      
    }
    std::cout << std::endl;
}

void PhoneBook::searchContacts()
{
    std::string input;
    int index;

    std::cout << CLEAR;
    std::cout << "*********************************************" << std::endl;
	std::cout << "*                SEARCH CONTACT             *" << std::endl;
	std::cout << "*********************************************" << std::endl << std::endl;

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
    while (1)
    {
        std::cout << "Please, enter a command: ";
        if (!std::getline(std::cin, input))
            break ;
        index = std::atoi(input.c_str());
        if (input == "BACK")
            break ;
        else if (index < 1 || index > MAX_CONTACTS)
        {
            std::cout << "Index number not valid. Try again or type BACK." << std::endl;
            continue ;
        }
        else
        {
            _contacts[index - 1].displayContact();
            std::cout << "Press ENTER to continue." << std::endl;
            std::cin.ignore();
            break ;            
        }
    }  
}
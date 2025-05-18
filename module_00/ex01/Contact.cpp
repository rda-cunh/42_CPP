/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:31:29 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/18 18:16:31 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
    _firstName = firstName;
    _lastName = lastName;
    _nickname = nickname;
    _phoneNumber = phoneNumber;
    _darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
    return (_firstName);
}

std::string Contact::getLastName()
{
    return (_lastName);
}

std::string Contact::getNick()
{
    return (_nickname);
}

std::string	Contact::formatWidth(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + "."); 
    else
        return (str);
}

void Contact::displayContact()
{
    std::cout << CLEAR;
    std::cout << "*********************************************" << std::endl;
	std::cout << "*              DISPLAY CONTACT              *" << std::endl;
	std::cout << "*********************************************" << std::endl << std::endl;
    std::cout << "First name: " << _firstName << std::endl;
    std::cout << "Last name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number: " << _phoneNumber << std::endl;
    std::cout << "Darkest secret " << _darkestSecret << std::endl << std::endl;
}

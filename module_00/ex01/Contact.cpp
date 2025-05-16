/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:31:29 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/16 13:05:49 by rda-cunh         ###   ########.fr       */
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
        return (str.substr(1, 9) + "."); 
    else
        return (str);
}

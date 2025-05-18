/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:31:16 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/18 18:21:56 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        Contact();
        ~Contact();
        void setContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
        std::string getFirstName();
        std::string getLastName();
        std::string getNick();
        static std::string	formatWidth(std::string str);
        void displayContact();
};

#endif
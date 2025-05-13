/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:24:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/13 01:10:10 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	print_header(void)
{
	std::cout << CLEAR;
	std::cout << "**********************************" << std::endl;
	std::cout << "*         CRAPY PHONEBOOK        *" << std::endl;
	std::cout << "**********************************" << std::endl;
	std::cout << "* Available commands:            *" << std::endl;
	std::cout << "*  ADD                           *" << std::endl;
	std::cout << "*  SEARCH                        *" << std::endl;
	std::cout << "*  EXIT                          *" << std::endl;
    std::cout << "**********************************" << std::endl << std::endl;
}

int main(void)
{
    PhoneBook Phone;
    std::string input;
    
    while(1)
    {
        print_header();
        std::cout << "Enter a command: ";
        if (!std::getline(std::cin, input))
            break ;
        for (int i = 0; input[i]; i++)
            input[i] = std::tolower(input[i]);
        if (input == "exit")
            break ;
        else if (input == "add")
            Phone.addContact();
        else if (input == "search")
            Phone.searchContacts();         
    }
    std::cout << CLEAR;
    return (0);
}

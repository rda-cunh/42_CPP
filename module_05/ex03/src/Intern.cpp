/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:39:51 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/21 08:20:01 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern: default constructor called." << std::endl;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern: copy constructor called." << std::endl;
    (void)other;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern: copy assignement operator called." << std::endl;
    (void)other;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern: destructor called." << std::endl;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
    std::string forms[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
    int number = -1;

    //convert string to intiger for switch using
    for (int i = 0; i < 3; i++)
        if (forms[number] = formName)
            number = i;
    
    //using switch to execute form creation
    switch (number)
    {
    ca
    
    case 3:
        /* code */
        break;
    
    default:
        break;
    }

    
}

/* void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = -1;
    
    //convert string to intiger for a switch
     for (int i = 0; i < 4; i++)
        if (levels[i] == level)
            levelIndex = i;

    //using swich to execute functions
    switch (levelIndex)
    {
    case 0:
        debug();
        // fall through
    case 1:
        info();
        // fall through
    case 2:
        warning();
        // fall through
    case 3:
        error();
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:39:51 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/21 18:51:49 by rda-cunh         ###   ########.fr       */
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
    std::string formTypes[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
    int formIndex = -1;

    //convert string to intiger for switch using
    for (int i = 0; i < 3; i++)
    {
        if (formTypes[formIndex] == formName)
        {
            formIndex = i;
            break;
        }
    }
    
    //using switch to execute form creation
    switch (formIndex)
    {
    case 0:
        return (makeShrubberyCreationForm(formTarget));
    case 1:
        return (makeRobotomyRequestForm(formTarget));
    case 2:
        return (makePresidentialPardonForm(formTarget));
    default:
        throw FormNotFound();
    }  
}

AForm *Intern::makeShrubberyCreationForm(const std::string &target) 
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomyRequestForm(const std::string &target) 
{
    return (new RobotomyRequestForm(target));
}
  
AForm *Intern::makePresidentialPardonForm(const std::string &target) 
{
    return (new PresidentialPardonForm(target));
}

const char *Intern::FormNotFound::what() const throw()
{
    return ("Form not found.");
}
  




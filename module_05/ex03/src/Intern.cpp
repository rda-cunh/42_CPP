/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:39:51 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/22 20:21:47 by rda-cunh         ###   ########.fr       */
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

AForm *Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
    //array of function pointers
    AForm* (*functions[3])(const std::string &) = 
    {
        &Intern::makeShrubberyCreationForm, 
        &Intern::makeRobotomyRequestForm, 
        &Intern::makePresidentialPardonForm
    };
    //array of form names (strings)
    std::string formTypes[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
    //find the correct function for each form.
    for (int i = 0; i < 3; ++i) 
    {
        if (formTypes[i] == formName) 
        {
            std::cout << "Intern creates " << formName << " form." << std::endl;
            return (functions[i])(formTarget);
        }
    }
    //throw exception if any of the form names is found
    throw FormNotFound();
}

const char *Intern::FormNotFound::what() const throw()
{
    return ("Form not found.");
}
  




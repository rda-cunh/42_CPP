/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/22 14:17:14 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Intern intern;
    Bureaucrat president("President", 1);
    AForm *formA = NULL;
    AForm *formB = NULL;
    AForm *formC = NULL;
    AForm *formD = NULL;
    
    std::cout << std::endl;
    std::cout << "--- Test 01: Intern tries to create an undefined form ---" << std::endl;

    try
    {
        formA = intern.makeForm("InternForm", "42");
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "--- Test 02: Intern create different forms and president signs and execute them---" << std::endl;

    try
    {
        formB = intern.makeForm("ShrubberyCreation", "forest");
        std::cout << *formB << std::endl;
        president.signForm(formB, "");
        president.executeForm(*formB);
        std::cout << std::endl;
        
        formC = intern.makeForm("RobotomyRequest", "Robocop");
        std::cout << *formC << std::endl;
        president.signForm(formC, "");
        president.executeForm(*formC);
        std::cout << std::endl;

        formD = intern.makeForm("PresidentialPardon", "Adam");
        std::cout << *formD << std::endl;
        president.signForm(formD, "");
        president.executeForm(*formD);
        std::cout << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
 
    delete formA;
    delete formB;
    delete formC;
    delete formD;

    return (0);
}


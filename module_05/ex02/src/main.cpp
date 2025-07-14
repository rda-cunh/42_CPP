/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/15 00:30:07 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

/* std::cout << "--- Test 01: ShrubberyCreationForm ---" << std::endl;
std::cout << std::endl;

try
{
    Bureaucrat BuroA("Buro A", 138);
    std::cout << BuroA << std::endl;
    ShrubberyCreationForm FormA("beach");
    std::cout << FormA << std::endl;

    FormA.beSigned(BuroA);

    try
    {
        FormA.execute(BuroA);  // First attempt, expected to fail
    }
    catch (std::exception &e)
    {
        std::cout << "First execution attempt failed: " << e.what() << std::endl;
    }

    BuroA.incrementBuro();  // Grade becomes 137, sufficient to execute
    std::cout << "After incrementation: " << BuroA << std::endl;

    try
    {
        FormA.execute(BuroA);  // Second attempt, expected to succeed
    }
    catch (std::exception &e)
    {
        std::cout << "Second execution attempt failed: " << e.what() << std::endl;
    }
}
catch (std::exception &e)
{
    std::cout << "Exception caught: " << e.what() << std::endl;
}

std::cout << std::endl; */
    std::cout << "--- Test 01: ShrubberyCreationForm ---" << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat BuroA("Buro A", 138);
        ShrubberyCreationForm FormA("beach");
        std::cout << FormA << std::endl;
        FormA.beSigned(BuroA);
        FormA.execute(BuroA);
        BuroA.incrementBuro();
        FormA.execute(BuroA);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Test 02: RobotomyRequestForm ---" << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat BuroB("Buro B", 46);
        RobotomyRequestForm FormB("school");
        std::cout << FormB << std::endl;
        FormB.beSigned(BuroB);
        FormB.execute(BuroB);
        BuroB.incrementBuro();
        FormB.execute(BuroB);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;


    std::cout << "--- Test 03: PresidentialPardonForm ---" << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat BuroC("Buro C", 6);
        PresidentialPardonForm FormC("club");
        std::cout << FormC << std::endl;
        FormC.beSigned(BuroC);
        FormC.execute(BuroC);
        BuroC.incrementBuro();
        FormC.execute(BuroC);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }


    std::cout << "--- Test 04: Try to execute an unsigned form ---" << std::endl;
    std::cout << std::endl;
    try
    {
        Bureaucrat BuroD("Buro D", 6);
        PresidentialPardonForm FormD("country");
        std::cout << FormD << std::endl;
        FormD.execute(BuroD);
        BuroD.incrementBuro();
        FormD.execute(BuroD);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return (0);
}


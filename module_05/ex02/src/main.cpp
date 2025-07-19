/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/19 18:03:06 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << "--- Test 01: ShrubberyCreationForm ---" << std::endl;
    std::cout << std::endl;

    Bureaucrat BuroA("Buro A", 138);
    std::cout << BuroA << std::endl;
    
    ShrubberyCreationForm FormA("beach");
    std::cout << FormA << std::endl;
    std::cout << std::endl;

    //Test 1.1: executing without signing
    std::cout << "Test 1.1: Try to execute unsign form / exception caught: \n";
    try
    {
        FormA.execute(BuroA);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    //Test 1.2: Sign with valid grade, but fail to execute because low grade
    std::cout << "Test 1.2: Signed with grade 138 (needs 137 to execute) / exception caught: \n";
    try
    {
        FormA.beSigned(BuroA);
        FormA.execute(BuroA);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Test 1.3: Increment bureaucrat and execute successfully
    std::cout << "Test 1.3: Promote to grade 137 and execute (success expected): \n";
    try
    {
        BuroA.incrementBuro();
        FormA.execute(BuroA);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "--- Test 02: RobotomyRequestForm ---" << std::endl;
    std::cout << std::endl;

    Bureaucrat BuroB("Buro B", 45);
    std::cout << BuroB << std::endl;

    RobotomyRequestForm FormB("school");
    std::cout << FormB << std::endl;
    std::cout << std::endl;

    std::cout << "Successful execution: \n";
    try
    {
        FormB.beSigned(BuroB);
        FormB.execute(BuroB);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "--- Test 03: PresidentialPardonForm ---" << std::endl;
    std::cout << std::endl;

    Bureaucrat BuroC("Buro C", 5);
    std::cout << BuroC << std::endl;
    
    PresidentialPardonForm FormC("club");
    std::cout << FormC << std::endl;
    std::cout << std::endl;

    std::cout << "Successful execution: \n";
    try
    {
        FormC.beSigned(BuroC);
        FormC.execute(BuroC);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}


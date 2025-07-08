/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/08 19:22:15 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main ()
{
    std::cout << "--- Test 01: initiate Buro with a wrong grade ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroA("Buro A", 151);
    }
    catch (std::exception &e)
    {
        std::cout << "Error creating 'Buro A': " << e.what() << std::endl;
    }
    std::cout << std::endl;


    std::cout << "--- Test 02: Perform wrong decrement ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroB("Buro B", 150);
    BuroB.decrementBuro();
    }
    catch (std::exception &e)
    {
        std::cout <<  "Error decrementing 'Buro B': " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Test 03: Perform wrong increment ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroC("Buro C", 1);
    BuroC.incrementBuro();
    }
    catch (std::exception &e)
    {
        std::cout << "Error incrementing 'Buro C': " << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "--- Test 04: Create a working bureaucrat, testing operator, decrement, increment and copy ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroD("Buro D", 10);
    std::cout << BuroD << std::endl; //testig operator overloading

    std::cout << "Decrementing and Incrementing 2x:" << std::endl;
    BuroD.decrementBuro();
    std::cout << "After Decrementing: " << BuroD;
    BuroD.incrementBuro();
    std::cout << "After Incrementing: " << BuroD;
    BuroD.incrementBuro();
    std::cout << "After Incrementing: " << BuroD;

    std::cout << std::endl;
    std::cout << "Creating a copy:" << std::endl;
    Bureaucrat BuroF(BuroD);
    std::cout << "I am a copy of Buro D: " << BuroF << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
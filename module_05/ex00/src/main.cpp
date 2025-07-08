/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/08 00:39:52 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
        std::cout << e.what() << std::endl;
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
        std::cout << e.what() << std::endl;
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
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "--- Test 04: working boreaucrat ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroD("Buro D", 10);
    std::cout << BuroD << std::endl; //testig operator overloading
    std::cout << std::endl;

    std::cout << "Decrementing and Increenting 2x:" << std::endl;
    BuroD.decrementBuro();
    std::cout << BuroD << std::endl;
    BuroD.incrementBuro();
    std::cout << BuroD << std::endl;
    BuroD.incrementBuro();
    std::cout << std::endl;

    std::cout << "Creating a copy:" << std::endl;
    Bureaucrat BuroF(BuroD);
    std::cout << "I am a copy of Buro D: " << BuroF << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    



}
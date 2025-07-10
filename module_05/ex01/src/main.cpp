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
#include "../inc/Form.hpp"

int main ()
{
    std::cout << "--- Test 01: expected behavior when a Buro signs a Form ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroA("Buro A", 100);
    std::cout << "Buro A: " << BuroA << std::endl;
    Form FormA("Form A", 120, 110);
    std::cout << "Form A (before signature): " << FormA << std::endl;
    FormA.beSigned(BuroA);
    std::cout << "Form A (after signature): " << FormA << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Test 02: Buro B tries to sign a form and fails, then Buro A tries to sign ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroB("Buro B", 121);
    std::cout << "Buro B: " << BuroA << std::endl;
    Form FormA("Form B", 120, 110);
    std::cout << "Form B (before signature): " << FormB << std::endl;
    FormA.beSigned(BuroB);
    std::cout << "Form B (after failed signature): " << FormB << std::endl;
    FormA.beSigned(BuroA);
    std::cout << "Form B (after signature): " << FormB << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}
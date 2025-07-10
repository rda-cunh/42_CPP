/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/10 20:29:44 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    std::cout << "--- Test 01: Buro A cand can sign a form (same level) ---" << std::endl;
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

    std::cout << "--- Test 02: Buro B try to sign a form and fails ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroB("Buro B", 120);
    std::cout << "Buro B: " << BuroB << std::endl;
    Form FormB("Form B", 100, 110);
    std::cout << "Form B (before signature): " << FormB << std::endl;
    FormB.beSigned(BuroB);
    std::cout << "Form B (after failed signature): " << FormB << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}
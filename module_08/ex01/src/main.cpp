/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:41:08 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/04 08:15:10 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return (0);
} */

int main()
{
    std::cout << "*** Test 1: Vector use and span calculations (subject) ***" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "*** Test 2: Testing exceptions ***" << std::endl;
    try
    {
        Span emptySpan(5);
        emptySpan.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Span oneMemberSpan(5);
        oneMemberSpan.addNumber(1);
        oneMemberSpan.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        Span fullSpan(2);
        fullSpan.addNumber(1);
        fullSpan.addNumber(2);
        fullSpan.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "*** Test 3: Testing addRandomNum function (also with a big number) ***" << std::endl;

    Span randomSpan = Span(100);
    randomSpan.addRandomNumbers(100);  
    std::cout << randomSpan.shortestSpan() << std::endl;
    std::cout << randomSpan.longestSpan() << std::endl;
    std::cout << std::endl;

/*     Span bigSpan = Span(10000);
    bigSpan.addRandomNumbers(10000);  
    std::cout << bigSpan.shortestSpan() << std::endl;
    std::cout << bigSpan.longestSpan() << std::endl;  */

    return (0);
}
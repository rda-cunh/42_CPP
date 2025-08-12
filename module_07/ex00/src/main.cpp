/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 08:01:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/12 16:45:28 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void ) 
{
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return 0;
}

/* //Alternative main with upgraded tests and a new test for floats
int main()
{
    std::cout << "*** Test 1: swap and min/max with ints ***" << std::endl;
    int a = 2;
    int b = 3;

    std::cout << "=== Before swap ===" << std::endl;
    std::cout << "a = " << a << "; b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "=== After swap ===" << std::endl;
    std::cout << "a = " << a << "; b = " << b << std::endl;
    std::cout << "min(a , b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a , b) = " << ::max(a, b) << std::endl;
    std::cout << std::endl;

    std::cout << "*** Test 2: swap and min/max with strings ***" << std::endl;
    std::string first = "chaine1";
    std::string second = "chaine2";

    std::cout << "=== Before swap ===" << std::endl;
    std::cout << "first = " << first << "; second = " << second << std::endl;
    ::swap(first, second);
    std::cout << "=== After swap ===" << std::endl;
    std::cout << "first = " << first << "; second = " << second << std::endl;
    std::cout << "min(first , second) = " << ::min(first, second) << std::endl;
    std::cout << "max(first , second) = " << ::max(first, second) << std::endl;
    std::cout << std::endl;

    std::cout << "*** Test 3: swap and min/max with floats ***" << std::endl;
    float c = -15.55f;
    float d = 10.1f;

    std::cout << "=== Before swap ===" << std::endl;
    std::cout << "c = " << c << "; d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "=== After swap ===" << std::endl;
    std::cout << "c = " << c << "; d = " << d << std::endl;
    std::cout << "min(c , d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c , d) = " << ::max(c, d) << std::endl;

    return (0);
} */
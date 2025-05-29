/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:50:47 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 18:56:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;

    return (0);
}

/*
int main(void) 
{
    Fixed a(3.14f);
    Fixed const b(2.71f);
    Fixed c(10);
    Fixed d(-5.5f);

    // Printing initial values
    std::cout << "\n=== Print Values ===" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << "\n\n";

    // Comparing operators
    std::cout << "=== Comparing Operators ===" << std::endl;
    std::cout << "a > b:  " << (a > b) << " (expected 1)" << std::endl;
    std::cout << "a < b:  " << (a < b) << " (expected 0)" << std::endl;
    std::cout << "c >= 10: " << (c >= Fixed(10)) << " (expected 1)" << std::endl;
    std::cout << "d <= -5: " << (d <= Fixed(-5)) << " (expected 0)" << std::endl;
    std::cout << "a == 3.14: " << (a == Fixed(3.14f)) << " (expected 1)" << std::endl;
    std::cout << "b != 2.71: " << (b != Fixed(2.71f)) << " (expected 0)\n\n";

    // Arithmetic operations
    std::cout << "=== Arithmetic Operations ===" << std::endl;
    std::cout << "a + b = " << a + b << " (expected ~5.85)" << std::endl;
    std::cout << "c - d = " << c - d << " (expected 15.5)" << std::endl;
    std::cout << "a * b = " << a * b << " (expected ~8.51)" << std::endl;
    std::cout << "c / 2 = " << c / Fixed(2) << " (expected 5)" << std::endl;
    
    // Increment operators
    std::cout << "\n=== Increment/Decrement ===" << std::endl;
    std::cout << "Original a: " << a << std::endl;
    std::cout << "Pre-increment: " << ++a << std::endl;
    std::cout << "Post-increment: " << a++ << " (now " << a << ")" << std::endl;
    std::cout << "Pre-decrement: " << --a << std::endl;
    std::cout << "Post-decrement: " << a-- << " (now " << a << ")\n\n";

    // Min/Max functions
    std::cout << "=== Min/Max Functions ===" << std::endl;
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;
    
    // Const version tests
    std::cout << "\n=== Const Versions ===" << std::endl;
    std::cout << "min(const b, const 0): " << Fixed::min(b, Fixed(0)) << std::endl;
    std::cout << "max(const b, const 0): " << Fixed::max(b, Fixed(0)) << std::endl << "\n";

    return (0);
}
*/

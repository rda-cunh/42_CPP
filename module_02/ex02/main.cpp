/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:50:47 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/30 02:44:21 by rda-cunh         ###   ########.fr       */
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

    //print numbers
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << std::endl;

    //comparison operators
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "c >= 10: " << (c >= Fixed(10)) << std::endl;
    std::cout << "a == 3.14: " << (a == Fixed(3.14f)) << std::endl;
    std::cout << std::endl;

    //arithmetic operators
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "c / 2 = " << c / Fixed(2) << std::endl;
    std::cout << std::endl;
    
    //increment/decrement
    std::cout << "a before increment: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a after post-increment: " << a << std::endl;
    std::cout << std::endl;
    
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a after post-decrement: " << a << std::endl;
    std::cout << std::endl;

    //min/max
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;
    std::cout << "min with const: " << Fixed::min(b, Fixed(0)) << std::endl;

    return (0);
}
*/


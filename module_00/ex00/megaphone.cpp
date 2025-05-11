/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:40:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/10 19:54:26 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace   Math
{
    int add(int a, int b) { return (a + b); }
    int substract(int a, int b) { return (a - b); }
    int multiply(int a, int b) { return (a * b); }
    int divide(int a, int b) { return (a / b); }
}

int main()
{
    std::cout << "*** Operations with 6 and 2 ***" << std::endl;
    std::cout << "Add: " << Math::add(6, 2) << std::endl;  
    std::cout << "Substract: " << Math::substract(6, 2) << std::endl;
    std::cout << "Multiply: " << Math::multiply(6, 2) << std::endl;
    std::cout << "Divide: " << Math::divide(6, 2) << std::endl;
    return (0);
}
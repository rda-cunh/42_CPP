/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 08:04:07 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/29 08:04:07 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

class D : public Base {};

int main()
{
    std::cout << "Test with a derived class (reference and pointer):" << std::endl;
    Base *derivedClass = generate();
    identify(derivedClass);
    identify(*derivedClass);

    std::cout << "Test with a wrong/non recognised class:" << std::endl;
    Base *wrongClass = new D;
    identify(wrongClass);
    identify(*wrongClass);
      
    return (0);
}
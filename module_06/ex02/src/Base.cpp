/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:54:39 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/04 20:28:38 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {};

Base *Base::generate(void)
{
    std::srand(time(NULL));

    switch (std::rand() % 3)
    {
    case 0:
        std::cout << "Object A generated." << std::endl;
        return (new A());
    case 1:
        std::cout << "Object B generated." << std::endl;
        return (new B());
    case 2:
        std::cout << "Object C generated." << std::endl;
        return (new C());
    default:
        std::cout << "Error while creating objects." << std::endl;
        exit(1); 
    }
}


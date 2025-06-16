/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:51:01 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 19:56:16 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat: default contructor called." << std::endl;
    this->_type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat: copy contructor called." << std::endl;
    this->_type = other._type;
    
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat: copy assignement operator called." << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: destructor called." << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "Hiss Hiss! I'm a WrongCat." << std::endl;
}

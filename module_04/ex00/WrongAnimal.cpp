/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:50:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/17 00:21:03 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Animal")
{
    std::cout << "Wrong Animal: default contructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Wrong Animal: copy contructor called." << std::endl;
    this->_type = other._type;
    
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Wrong Animal: copy assignement operator called." << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal: destructor called." << std::endl;
}

void WrongAnimal::makeSound() const 
{
    std::cout << "I'm an undefined Wrong Animal and I make no sound." << std::endl;
}

std::string WrongAnimal::getType() const {return (this->_type);}


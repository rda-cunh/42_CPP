/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:20:40 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/14 19:50:34 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal: default contructor called." << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal: copy contructor called." << std::endl;
    this->_type = other._type;
    
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal: copy assignement operator called." << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal: destructor called." << std::endl;
}

void Animal::makeSound() const 
{
    std::cout << "I'm an undefined animal and I make no sound." << std::endl;
}

std::string Animal::getType() const {return (this->_type);}



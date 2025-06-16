/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:21:24 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 01:31:01 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog: default contructor called." << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog: copy contructor called." << std::endl;
    this->_type = other._type;
    
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog: copy assignement operator called." << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog: destructor called." << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof woof! I'm a dog." << std::endl;
}

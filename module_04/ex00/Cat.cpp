/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:21:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 01:28:20 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat: default contructor called." << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat: copy contructor called." << std::endl;
    this->_type = other._type;
    
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat: copy assignement operator called." << std::endl;
    if (this == &other)
        return *this;
    this->_type = other._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat: destructor called." << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meow Meow! I'm a cat." << std::endl;
}

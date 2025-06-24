/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:21:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/24 16:45:51 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat: default contructor called." << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat: copy contructor called." << std::endl;
    this->_brain = new Brain(*other._brain);    
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat: copy assignement operator called." << std::endl;
    if (this == &other)
        return *this;
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat: destructor called." << std::endl;
    delete this->_brain;
}

void Cat::makeSound() const 
{
    std::cout << "Meow Meow! I'm a cat." << std::endl;
}

Brain	*Cat::getBrain()
{
	return (this->_brain);
}

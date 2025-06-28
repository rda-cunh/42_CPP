/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:51:58 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/28 10:45:32 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice: default constructor called." << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice: copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice: copy assignment operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this); 
}

Ice::~Ice()
{
    std::cout << "Ice: destructor called." << std::endl;
}

AMateria *Ice::clone() const
{
    Ice *clone = new Ice;
    return(clone); 
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


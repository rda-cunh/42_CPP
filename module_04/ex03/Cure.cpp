/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:52:29 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/26 19:15:05 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure: default constructor called." << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure: copy constructor called." << std::endl; 
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure: copy assignment operator." << std::endl;
    if (this == &other)
        return(*this);
    this->_type = other._type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure: destructor called." << std::endl; 
}

AMateria* Cure::clone() const
{
    Cure *clone = new Cure;
    return (clone); 
} 

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

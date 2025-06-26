/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:32:23 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/26 01:16:24 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria: default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria: constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria: copy constructor called." << std::endl;
    (void)other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria: copy assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria: destructor called." << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "I don't have an ability to use on " << target.getName() << std::endl;
}



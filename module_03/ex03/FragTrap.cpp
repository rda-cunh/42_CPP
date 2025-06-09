/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:40:47 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 12:57:15 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
    this->_name = "NoName";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Default constructor called. FragTrap has been created." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) 
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Constructor called. FragTrap " << this->_name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Copy Constructor called. FragTrap " << this->_name << " has been created." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Copy assignment operator called for FragTrap." << std::endl;
    if (this == &other)
        return *this;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getattackDamage();
    return (*this);
}

FragTrap::~FragTrap() 
{
    std::cout << "Destructor called. FragTrap " << this->_name << " has been destroyed." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " is asking for an high five." << std::endl;
}
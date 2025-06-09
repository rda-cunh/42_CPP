/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:26:21 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 17:14:07 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    this->_name = "NoName";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor called. ScavTrap has been created." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) 
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Constructor called. ScavTrap " << this->_name << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "Copy Constructor called. ScavTrap " << this->_name << " has been created." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Copy assignment operator called for ScavTrap." << std::endl;
    if (this == &other)
        return *this;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getattackDamage();
    return (*this);
}

ScavTrap::~ScavTrap() 
{
    std::cout << "Destructor called. ScavTrap " << this->_name << " has been destroyed." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target 
        << ", causing " << this->getattackDamage() << " points of damage!" << std::endl;
        addEnergyPoints(-1);
    }
    else
    {
        std::cout << "ScavTrap " << this->getName() << " can't attack." << std::endl;
        return ;
    }
}


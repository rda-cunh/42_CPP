/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:04:14 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 13:03:56 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    this->_name = "NoName";
    this->ClapTrap::_name = "NoName_clap_name";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "Default constructor called. DiamondTrap has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "Constructor called. DiamondTrap " << this->_name << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other._name), ScavTrap(other._name), FragTrap(other._name)
{
    *this = other;
    std::cout << "Copy Constructor called. DiamondTrap " << this->_name << " has been created." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "Copy assignment operator called for DiamondTrap." << std::endl;
    if (this == &other)
        return *this;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getattackDamage();
    return (*this);
}

DiamondTrap::~DiamondTrap() 
{
    std::cout << "Destructor called. DiamondTrap " << this->_name << " has been destroyed." << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is " << DiamondTrap::_name << " and my ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}
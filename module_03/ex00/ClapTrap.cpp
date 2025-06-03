/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:15:01 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/03 16:54:57 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "NoName";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_atackDamage = 0;
    std::cout << "Default constructor called. ClapTrap has been created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
    this-> _name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_atackDamage = 0;
    std::cout << "Constructor called. Claptrap " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "Copy Constructor called. Claptrap " << this->_name << " has been created." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called." << std::endl;
    if (this == &other)
        return *this;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_atackDamage = other.getAtackDamage();
    return (*this);
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor called. Claptrap " << this->_name << " has been destroyed." << std::endl;
}

std::string ClapTrap::getName() const {return (this->_name);}
int ClapTrap::getHitPoints() const {return (this->_hitPoints);}
int ClapTrap::getEnergyPoints() const {return (this->_energyPoints);}
int ClapTrap::getAtackDamage() const {return (this->_atackDamage);}

void ClapTrap::addEnergyPoints(int amount) {this->_energyPoints += amount;}
void ClapTrap::addHitPoints(int amount) {this->_hitPoints += amount;}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << _name << " attacked." << std::endl;
    addEnergyPoints(-1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << "was attacked and lost " << amount << "points." << std::endl;
    addHitPoints(amount);
}








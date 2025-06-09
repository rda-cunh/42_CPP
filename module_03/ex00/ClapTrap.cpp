/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:15:01 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 17:10:42 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "NoName";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Default constructor called. ClapTrap has been created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
    this-> _name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
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
    this->_attackDamage = other.getattackDamage();
    return (*this);
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor called. Claptrap " << this->_name << " has been destroyed." << std::endl;
}

std::string ClapTrap::getName() const {return (this->_name);}
int ClapTrap::getHitPoints() const {return (this->_hitPoints);}
int ClapTrap::getEnergyPoints() const {return (this->_energyPoints);}
int ClapTrap::getattackDamage() const {return (this->_attackDamage);}
void ClapTrap::setName(const std::string& newName) 
{
    std::cout << this->getName() << " was renamed " << newName << "." << std::endl;
    this->_name = newName;
}

void ClapTrap::addEnergyPoints(int amount) {this->_energyPoints += amount;}
void ClapTrap::addHitPoints(int amount) {this->_hitPoints += amount;}


void ClapTrap::attack(const std::string& target)
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target 
        << ", causing " << this->getattackDamage() << " points of damage!" << std::endl;
        addEnergyPoints(-1);
    }
    else
    {
        std::cout << this->getName() << " can't attack." << std::endl;
        return ;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->getName() << " was attacked and lost " << amount << " points." << std::endl;
    addHitPoints(-(int)amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << "ClapTrap " << this->getName() << " repared himself and gained " << amount << " hit points." << std::endl;
        addHitPoints((int)amount);
        addEnergyPoints(-1);
    }
    else
    {
        std::cout << "ClapTrap " << this->getName() << " can't be repaired." << std::endl;
        return ;
    }

}








/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:15:01 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/02 16:39:56 by rda-cunh         ###   ########.fr       */
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

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "Copy assignment operator called\n";
  if (this == &other)
    return *this;
  this->Name_ = other.getName();
  this->HitPoints_ = other.getHitPoints();
  this->EnergyPoints_ = other.getEnergyPoints();
  this->AttackDamage_ = other.getAttackDamage();
  return *this;
}


std::string ClapTrap::getName() {return (this->_name);}

int ClapTrap::getHitPoints() {return (this->_hitPoints);}

int ClapTrap::getEnergyPoints() {return (this->_energyPoints);}

int ClapTrap::getAtackDamage() {return (this->_atackDamage);}







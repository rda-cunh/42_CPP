/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 01:26:46 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/28 01:25:26 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
    std::cout << "Character: default constructed called for " << this->_name 
        << "." << std::endl;
    for (int i = 0; i < SLOTS; i++)             //initializing inventory array to avoid conditional jumps
        this->_inventory[i] = NULL;
}

Character::Character(const Character &other)
{
    std::cout << "Character: copy constructor called." << std::endl;
    for (int i = 0; i < SLOTS; i++)             //initializing inventory array to avoid conditional jumps
        this->_inventory[i] = NULL;
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character: copy assignement operator called." << std::endl;
    if (this == &other)
        return (*this);
    while (!this->_unequipedMaterias.empty())
    {
        delete this->_unequipedMaterias.front();
        this->_unequipedMaterias.pop_front();
    }
    this->_unequipedMaterias.assign(other._unequipedMaterias.begin(), 
                                        other._unequipedMaterias.end());
    
    for (int i = 0; i < SLOTS; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i];
    }
    this->_name = other._name;
    return (*this);
}

Character::~Character()
{
    std::cout << "Character: destructor called." << std::endl;
    while (!this->_unequipedMaterias.empty())
    {
        delete this->_unequipedMaterias.front();
        this->_unequipedMaterias.pop_front();
    }
    for (int i = 0; i < SLOTS; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];

    }

}

const std::string &Character::getName() const {return (this->_name);}

void Character::equip(AMateria *m)
{
    if (!m) //avoid segfault (check for null ptr)
    {
        std::cout << "Can't equip a NULL Materia." << std::endl;
        return ;
    }
    for (int i = 0; i <= SLOTS; i++)
    {
        if (i == SLOTS)
        {
            std::cout << "There's no space left to equip this " << m->getType() 
                << "." << std::endl;
            delete m; //delete reject one to avoid leaks
            return ;
        }
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            return ;
        }    
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= SLOTS)
        std::cout << "Invalid slot number provided." << std::endl;
    else if (!this->_inventory[idx])
        std::cout << "The slot number provided is not equiped." << std::endl;
    else
    {
        this->_unequipedMaterias.push_front(this->_inventory[idx]);
        this->_inventory[idx] = NULL;
    }    
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= SLOTS)
        std::cout << "Invalid slot number provided." << std::endl;
    else if (!this->_inventory[idx])
        std::cout << "The slot number provided is not equiped." << std::endl;
    else
        this->_inventory[idx]->use(target); 
}

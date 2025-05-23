/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 00:56:46 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/23 00:56:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : this->_name(name) 
{
    this->_weapon = NULL;
}

HumanB::~HumanB() {}

void    HumanB::attack()
{
    if (!this->_weapon)
        std::cout << this->_name << " has no weapon." << std::endl;
    else
        std::cout << this->_name << " atacks with his " << this->_weapon << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;    
}

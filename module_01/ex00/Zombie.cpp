/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:26:41 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/21 01:18:14 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string &inputname)
{
    name = inputname; 
}

Zombie::~Zombie() {}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie  *newZombie(std::string name)
{
    return (new Zombie(name));
}

void    randomChump(std::string name)
{
    Zombie chump(name);
    chump.announce();
}
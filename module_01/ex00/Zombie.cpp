/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:26:41 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/19 01:07:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {}

std::string Zombie::getName() {return (_name)}

void Zombie::announce()
{
    std::string name;

    name = getName();
    std::cout << name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

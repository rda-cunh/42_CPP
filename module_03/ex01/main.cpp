/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:14:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/08 08:54:03 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- TEST 1: Creating a Scavtrap, attacking, reparing, enters guard gate mode, get destroyed" << std::endl;
    std::cout << std::endl;

    std::cout << "Constructors are called by by order (base class to derived class): " << std::endl;
    ScavTrap RoboCop("Robocop");
    std::cout << std::endl;
    RoboCop.attack("aliens");   //ScavTrap message (overrided)
    RoboCop.beRepaired(6);      //Inherenced message method from ClapTrap
    RoboCop.guardGate();        //Scavtrap original method/message
    std::cout << std::endl;
    std::cout << "Destructors are called by by reverse order (derived class to base class): " << std::endl;

    return (0);
}
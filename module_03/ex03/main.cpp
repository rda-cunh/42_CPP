/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:14:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 15:51:08 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "--- TEST 1: Creating a DiamondTrap, checking inherited atributes, attacking (ScavTrap), asks for an high five (FragTrap), repares (ClapTrap), checks ID and get destructed" << std::endl;
    std::cout << std::endl;

    std::cout << "Constructors are called by by order (base class to derived class): " << std::endl;
    DiamondTrap RoboCop("Robocop");
    std::cout << std::endl;

    std::cout << "Hit Points:" << RoboCop.getHitPoints() << std::endl;
    std::cout << "Energy Points:" << RoboCop.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage:" << RoboCop.getattackDamage() << std::endl;
    std::cout << std::endl;

    RoboCop.attack("aliens");   //Inherenced message method from ScavTrap
    RoboCop.highFivesGuys();    //Inherenced message method from FragTrap
    RoboCop.beRepaired(6);      //Inherenced message method from ClapTrap
    RoboCop.whoAmI();           //FragTrap original method/message: prints name and ClapTrap name;
    std::cout << std::endl;
    
    std::cout << "Destructors are called by by reverse order (derived class to base class): " << std::endl;

    return (0);
}
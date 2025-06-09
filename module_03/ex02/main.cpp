/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:14:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 14:20:10 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- TEST 1: Creating a FragTrap, attacking, reparing, requested an high five, get destroyed" << std::endl;
    std::cout << std::endl;

    std::cout << "Constructors are called by by order (base class to derived class): " << std::endl;
    FragTrap RoboCop("Robocop");
    std::cout << std::endl;

    std::cout << "Hit Points:" << RoboCop.getHitPoints() << std::endl;
    std::cout << "Energy Points:" << RoboCop.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage:" << RoboCop.getattackDamage() << std::endl;
    std::cout << std::endl;
    
    RoboCop.attack("aliens");   //Inherenced message method from ClapTrap (subject does not request to override)
    RoboCop.beRepaired(6);      //Inherenced message method from ClapTrap
    RoboCop.highFivesGuys();    //FragTrap original method/message
    std::cout << std::endl;
    
    std::cout << "Destructors are called by by reverse order (derived class to base class): " << std::endl;

    return (0);
}
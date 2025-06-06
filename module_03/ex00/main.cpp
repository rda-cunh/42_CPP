/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:14:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/06 08:51:00 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "--- TEST 1: Creating a Claptrap, attacking and reparing ---" << std::endl;

    std::cout << std::endl;
    ClapTrap RoboCop("Robocop");
    RoboCop.attack("aliens");
    RoboCop.takeDamage(3);
    RoboCop.attack("aliens");
    RoboCop.takeDamage(3);
    RoboCop.beRepaired(6);
    std::cout << std::endl;
    std::cout << "RoboCop is loosing and decide to create a clone...\n" << std::endl;

    std::cout << "--- TEST 2: Creating a copy Claptrap, attack, friendly attack, clone died and threat elimination ---" << std::endl;
    
    std::cout << std::endl;
    ClapTrap RoboCop2(RoboCop);
    RoboCop2.attack("aliens");
    RoboCop2.takeDamage(5);
    std::cout << std::endl;
    std::cout << "RoboCop clone missed and atacked Robocop:" << std::endl;
    RoboCop2.attack(RoboCop.getName());   //friendly attack
    RoboCop.takeDamage(3);
    RoboCop2.takeDamage(5);
    std::cout << std::endl;
    std::cout << "RoboCop clone died, but will atempt to atack and repair:" << std::endl;
    RoboCop2.attack("aliens");
    RoboCop2.beRepaired(10);
    std::cout << std::endl;
    RoboCop.attack("aliens");
    RoboCop.attack("aliens");
    std::cout << "All aliens were eliminated." << std::endl;

    return (0);
}
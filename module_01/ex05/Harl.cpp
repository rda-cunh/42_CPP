/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 00:11:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/24 23:29:49 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
    std::cout << "I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I’ve been coming for years, whereas you started working ";
    std::cout << "here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager ";
    std::cout << "now." << std::endl;
}

void Harl::complain(std::string level)
{
    //array of fucntion pointers
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    //array of level names
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    //find the correct function for each level
    for (int i = 0; i < 4; i++)
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    //in case the level does not correspond to any of the names in the array
    std::cout << "Level unknown." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 00:11:32 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/24 23:28:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
    std::cout << "I really do!\n" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\n";
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I’ve been coming for years, whereas you started working ";
    std::cout << "here just last month.\n" << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager ";
    std::cout << "now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = -1;
    
    //convert string to intiger for a switch
     for (int i = 0; i < 4; i++)
        if (levels[i] == level)
            levelIndex = i;

    //using swich to execute functions
    switch (levelIndex)
    {
    case 0:
        debug();
        // fall through
    case 1:
        info();
        // fall through
    case 2:
        warning();
        // fall through
    case 3:
        error();
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}
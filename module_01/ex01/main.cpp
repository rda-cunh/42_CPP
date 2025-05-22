/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:41:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/22 00:04:30 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string hordName;
    int         hordSize;

    std::cout << "Let's create a zombie horde!" << std::endl;
    while(1)
    {
        std::cout << "Enter the size of the horde: " << std::endl;
        std::cin >> hordSize;
        if (std::cin.fail() || hordSize <= 0)
        {
            std::cout << "Invalid Input. Please insert a valid number." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n'); //clear error and flushes the buffer
        }
        else
            break ;
    }
    std::cout << "Enter a name for the horde:" << std::endl; 
    std::cin >> hordName;  
    
    Zombie *horde = zombieHorde(hordSize, hordName);
    for (int i = 0; i < hordSize; i++)
        horde[i].announce();
    delete[] horde;
}

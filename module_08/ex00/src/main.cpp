/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:37:27 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/28 22:57:46 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    try
    {
        srand(std::time(0));

        std::cout << "Creating a random vector with five values from 0 to 5:" << std::endl;
        std::vector<int> vect;
        for (int i = 0; i < 5; i++)
        {
            int randomNum = rand() % 5;
            vect.push_back(randomNum);
            std::cout << "Added number " << randomNum << " to the vector." << std::endl;
        } 

        int numToBeFound = rand() % 10;
        std::cout << "Trying to find the number " << numToBeFound << " on the vector." << std::endl;
        easyfind(vect, numToBeFound);        
        
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:37:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/18 16:21:42 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << "*** Test 1: Array of chars ***" << std::endl;
    try
    {
        
        //create an array and populate it with the alphabet
        Array<char> charArray(26);
        char letter = 'a';
        for (unsigned int i = 0; i < charArray.size(); i++)
        {
            charArray[i] = letter++;
            std::cout << "Index " << i << " = " << charArray[i] << std::endl;
        }

        //change an element of the array (test operator overloading for [])
        charArray[3] = 'a';
        std::cout << "Elements of the modified array: ";
        for (unsigned int i = 0; i < charArray.size(); i++)
            std::cout << charArray[i] << ' ';
        
        std::cout << std::endl;
        //print the size of the array (test size() function)
        std::cout << "Size of the array is: " << charArray.size() << std::endl;

        //test an out of bound index
        std::cout << "Out of Bound exception: ";
        charArray[100] = 'z';
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
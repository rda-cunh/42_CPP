/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:37:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/20 08:08:16 by rda-cunh         ###   ########.fr       */
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
        std::cout << std::endl;

        //change an element of the array (test operator overloading for [])
        charArray[3] = 'a';
        std::cout << "Elements of the modified array: ";
        for (unsigned int i = 0; i < charArray.size(); i++)
            std::cout << charArray[i] << ' ';
        std::cout << std::endl;
        std::cout << std::endl;
        
        //print the size of the array (test size() function)
        std::cout << "Size of the array is: " << charArray.size() << std::endl;
        std::cout << std::endl;

        //test an out of bound index
        charArray[100] = 'z';
    }
    catch(const std::exception &e)
    {
        std::cout << "Out of Bound exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "*** Test 2: Array of ints ***" << std::endl;
    try
    {
        //create an array and populate it with the alphabet
        Array<int> intArray(10);
        int n = 2;
        for (unsigned int i = 0; i < intArray.size(); i++)
        {
            intArray[i] = n*(i+1);
            std::cout << "Index " << i << " = " << intArray[i] << std::endl;
        }
        std::cout << std::endl;

        //create a copy array and using the assigned operator 
        Array<int> copyArray(intArray); //copy constructor
        Array<int> assignedArray;
        assignedArray = intArray; //assigned operator
        std::cout << "Verifying the copy is an hard copy:" << std::endl;
        std::cout << "intArray[0] address:  " << &intArray[0] << std::endl;
        std::cout << "copyArray[0] address: " << &copyArray[0] << std::endl;
        std::cout << "assignedArray[0] address: " << &assignedArray[0] << std::endl;
        std::cout << std::endl;

        //change elements of the arrays (test operator overloading for [])
        intArray[5] = 0;
        std::cout << "Elements of the modified array: (after changing index 5): ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << ' ';
        std::cout << std::endl;
        copyArray[0] = 0;
        std::cout << "Elements of the copy array (after changing index 0): ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << copyArray[i] << ' ';
        std::cout << std::endl;
        std::cout << std::endl;
        
        //test an out of bound index
        copyArray[100] = 100;
    }
    catch(const std::exception &e)
    {
        std::cout << "Out of Bound exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "*** Test 3: Empty Array ***" << std::endl;
    try
    {
        //create an empty array and print its size
        Array<int> emptyArray;
        std::cout << "Size of array: " << emptyArray.size() << std::endl;

        //trying to access an empty array will throw an exception
        emptyArray[0] = 42;
    }
    catch(const std::exception &e)
    {
        std::cout << "Out of Bound exception: " << e.what() << std::endl;
    }

    return (0);
}
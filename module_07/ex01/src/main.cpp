/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:57:45 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/15 17:32:40 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void ft_printChar(char &c) { std::cout << c << std::endl; }
void ft_doubleNum(int &n) 
{ 
    n *= 2; 
    std::cout << n << std::endl;
}
void ft_moduleFloats(float &f)
{
    f = (f < 0 ? -f : f); 
    std::cout << f << std::endl;
}

int main()
{
    std::cout << "*** Test 1: print each char of a string (array of chars) ***" << std::endl;
    std::string str = "Hello World!";
    ::iter(&str[0], str.size(), ft_printChar);
    std::cout << std::endl;

    std::cout << "*** Test 2: double the numbers of an int array ***" << std::endl;
    int array[] = {1, 2, 3, 4, 5};
    ::iter(&array[0], sizeof(array)/sizeof(array[0]), ft_doubleNum);
    std::cout << std::endl;

    std::cout << "*** Test 3: apply module on an array of floats ***" << std::endl;
    float arrayf[] = {-33.0f, 45.06f, -88.787f};
    ::iter(&arrayf[0], sizeof(arrayf)/sizeof(arrayf[0]), ft_moduleFloats);

    return (0);
}
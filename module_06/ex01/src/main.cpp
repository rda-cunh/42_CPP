/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 08:04:07 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/29 08:04:07 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data ContactSerializer = {"Ricardo", 964242424};
    std::cout << "Before serializing: " << std::endl
              << "Name: " << ContactSerializer.name << std::endl
              << "Phone Number: " << ContactSerializer.phone_number 
              << std::endl << std::endl;

    uintptr_t converted = Serializer::serialize(&ContactSerializer);
    std::cout << "After serializing (address): " << converted << std::endl << std::endl;

    Data *reconverted = Serializer::deserialize(converted);
    std::cout << "After deserializing: " << std::endl
              << "Name: " << reconverted->name << std::endl
              << "Phone Number: " << reconverted->phone_number 
              << std::endl << std::endl;
      
    return (0);
}
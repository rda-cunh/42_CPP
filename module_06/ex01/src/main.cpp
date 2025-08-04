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
    Data ContactSerializer = {"Ricardo", "960000000"};
    std::cout << "Before serializing: " << std::endl
              << "Name: " << ContactSerializer.name
              << "Number: " << ContactSerializer.phone_number << std::endl;

    uintptr_t converted = Serializer::serialize(&ContactSerializer);
    std::cout << "After serializing: " << std::endl
              << "Name: " << *reinterpret_cast<int *>(converted)
              << "Number: " << *reinterpret_cast<int *>(converted) << std::endl;
    
    return (0);
}
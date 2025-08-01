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

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "You must input only one argument!" << std::endl;
        return (1);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}
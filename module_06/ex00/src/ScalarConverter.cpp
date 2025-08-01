/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 08:04:45 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/29 08:04:45 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this == &other)
        return (*this);
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isChar(const std::string &rep)
{
    return (rep.size() == 1 && std::isprint(rep[0]) && !std::isdigit(rep[0]));
}

bool ScalarConverter::isIntiger(const std::string &rep)
{
    const size_t signal = rep.find('-');
    if (signal != 0 && signal != std::string::npos)
        return (false);
    
    if (rep.find_first_not_of(
            DIGITS, signal == std::string::npos ? 0 : 1) != std::string::npos)
        return (false);
    return(true);
}

/* bool ScalarConverter::isFloat(const std::string &rep)
{
    const size_t signal = rep.find('-');
    if (signal != 0 && signal != std::string::npos)
        return (false);

    const 
} */

void ScalarConverter::convertFromChar(const std::string &rep)
{
    convertToChar(rep[0]);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "int: " << static_cast<int>(rep[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(rep[0]) << "f" << std::endl;
    std::cout << "Double: " << static_cast<double>(rep[0]) << std::endl;
}

void ScalarConverter::convertToChar(const char &c)
{
    if (std::isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: " << "Non displayable" << std::endl;
}

void ScalarConverter::convert(const std::string &rep)
{
    if (isChar(rep))
        convertFromChar(rep);
//  else if (isIntiger(rep))
//      convertToNumber(rep);  
    else
        std::cout << "Unknown Type." << std::endl;
}

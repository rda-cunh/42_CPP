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

bool ScalarConverter::isInteger(const std::string &rep)
{
    const size_t signal = rep.find('-');
    if (signal != 0 && signal != std::string::npos)
        return (false);
    
    size_t start = (signal == 0) ? 1 : 0;
    for (size_t i = start; i < rep.size(); ++i) 
    {
        if (!std::isdigit(rep[i]))
         return false;
    }
    return(true);
}

bool ScalarConverter::isFloat(const std::string &rep)
{
    const size_t signal = rep.find('-');
    if (signal != 0 && signal != std::string::npos)
        return (false);

    const size_t dot = rep.find('.');
    if (dot == std::string::npos)
        return (false);

    if (rep[rep.size() - 1] != 'f')
        return (false);

    for (size_t i = 0; i < rep.size(); i++)
    {
        if (i == 0 && signal == 0)
            continue;
        if (i == dot)
            continue;
        if (i == rep.size() - 1)
            continue;
        if (!std::isdigit(rep[i]))
            return (false);
    }
    return (true);
}

bool ScalarConverter::isDouble(const std::string &rep)
{
    const size_t signal = rep.find('-');
    if (signal != 0 && signal != std::string::npos)
        return (false);

    const size_t dot = rep.find('.');
    if (dot == std::string::npos)
        return (false);
    
    for (size_t i = 0; i < rep.size(); i++)
    {
        if (i == 0 && signal == 0)
            continue;
        if (i == dot)
            continue;
        if (!std::isdigit(rep[i]))
            return (false);
    }
    return (true);
}

bool ScalarConverter::isInfinite(const std::string &rep)
{
    if (rep == "+inf" || rep == "-inf" || rep == "nan" 
        || rep == "+inff" || rep == "-inff" || rep == "nanf")
        return (true);
    return (false); 
}

void ScalarConverter::convertFromChar(const std::string &rep)
{
    convertToChar(rep[0]);
    std::cout << "int: " << static_cast<int>(rep[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(rep[0]) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(rep[0]) << std::endl;
}

void ScalarConverter::convertToChar(const char &c)
{
    if (std::isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: " << "Non displayable" << std::endl;
}

void ScalarConverter::convertToNumber(const std::string &rep, long double number)
{
    if (number < std::numeric_limits<char>::min() 
        || number > std::numeric_limits<char>::max())
        std::cout << "char: overflows" << std::endl;
    else
        convertToChar(static_cast<char>(number));

    if (number < std::numeric_limits<int>::min()
        || number > std::numeric_limits<int>::max())
        std::cout << "int: overflows" << std::endl;
    else
        std::cout << "int: " << std::atoi(rep.c_str()) << std::endl;

    if (number < -std::numeric_limits<float>::max() 
        || number > std::numeric_limits<float>::max())
        std::cout << "float: overflows" << std::endl;
    else
        std::cout << "float: " << std::strtof(rep.c_str(), NULL) 
            << "f" << std::endl;

    if (number < -std::numeric_limits<double>::max() 
        || number > std::numeric_limits<double>::max())
        std::cout << "double: overflows" <<  std::endl; 
    else
        std::cout << "double: " << std::strtod(rep.c_str(), NULL) 
            << std::endl;
}

void ScalarConverter::convertFromInfinite(const std::string &rep)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;

    if (rep.find("nan") != std::string::npos)
    {
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else
    {
        std::cout << "float: " << rep[0] << "inff" << std::endl;
        std::cout << "double: " << rep[0] << "inf" <<  std::endl;
    }
}

void ScalarConverter::convert(const std::string &rep)
{
    std::cout << std::fixed << std::setprecision(1);
    if (isChar(rep))
        convertFromChar(rep);
    else if (isInteger(rep))
        convertToNumber(rep, std::strtold(rep.c_str(), NULL));
    else if (isFloat(rep))
        convertToNumber(rep, std::strtold(rep.c_str(), NULL));
    else if (isDouble(rep))
        convertToNumber(rep, std::strtold(rep.c_str(), NULL));
    else if (isInfinite(rep))
        convertFromInfinite(rep);
    else
        std::cout << "Unknown Type." << std::endl;
}

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

ScalarConverter::ScalarConverter(const ScalarConverter &other);
{
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other);
{
    if (this == &other)
        return (*this);
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::isChar(const std::string &rep)
{
    return (rep.size() = 1 && std::isprint(rep[0]) && !std::isdigit(rep[0]))
}

bool ScalarConverter::isIntiger(const std::string &rep)
{
    const size_t signal = rep.find('-');
    if (signal != 0 && signal != std::string::npos)
        return (false);
    
    if (rep.find_first_not_of(
        DIGITS, signal == std::string::npos ? 0 : 1) != std::string::npos)
        return (false);
    return(true),
}

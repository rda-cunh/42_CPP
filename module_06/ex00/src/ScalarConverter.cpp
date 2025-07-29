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




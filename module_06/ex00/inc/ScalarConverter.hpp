/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 07:30:48 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/29 07:30:48 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        virtual ~ScalarConverter() = 0;

        static bool isChar(const std::string &rep);
        static bool isIntiger(const std::string &rep);
        static bool isFloat(const std::string &rep);
        static bool isDouble(const std::string &rep);
        static bool isInfinite(const std::string &rep);

    public:
        static void converter(const std::string rep);
};

#endif
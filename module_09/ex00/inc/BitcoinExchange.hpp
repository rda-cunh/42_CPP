/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:59:58 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/17 00:07:28 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>

class BitcoinExchange
{
private:
    std::map<std::string, float> _list;

    BitcoinExchange(); // Default constructor (non-instantiable class).

public:
    BitcoinExchange(const char *file);                        // Constructor
    BitcoinExchange(const BitcoinExchange &other);            // Copy Constructor
    BitcoinExchange &operator=(const BitcoinExchange &other); // Copy assignement operator
    ~BitcoinExchange();                                       // Destructor

    // Exceptions
    class NoDataFile : public std::exception
    {
        const char *what() const throw();
    };
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:59:58 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/18 21:59:00 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <utility>
#include <ctime>

class BitcoinExchange
{
private:
    std::map<std::string, float> _list;

    BitcoinExchange(); // Default constructor (non-instantiable class).
    void parseDatabase();
    void parseInputFile(const char *filename);
    bool checkValidDate(const tm &date);

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

    class EmptyDataFile : public std::exception
    {
        const char *what() const throw();
    };

    class DataLineOutOfFormat : public std::exception
    {
        const char *what() const throw();
    };

    class NoInputFile : public std::exception
    {
        const char *what() const throw();
    };

    class EmptyInputFile : public std::exception
    {
        const char *what() const throw();
    };

    class InputLineOutOfFormat : public std::exception
    {
        const char *what() const throw();
    };

    class InvalidDate : public std::exception
    {
        const char *what() const throw();
    };
};
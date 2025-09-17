/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:59:28 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/17 22:13:19 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

void BitcoinExchange::parseDatabase()
{
    std::ifstream database("data.csv", std::ifstream::in);
    if (!database.is_open())
        throw NoDataFile();

    std::string line;

    if (!std::getline(database, line)) // Skips first line
        throw EmptyDataFile();         // Empty data file

    while (std::getline(database, line))
    {
        std::size_t pos = line.find(',');
        if (pos == std::string::npos)
            throw DataLineOutOfFormat();

        std::string date = line.substr(0, pos);
        std::string rate = line.substr(pos + 1);

        this->_list.insert(std::make_pair(date, std::atof(rate.c_str())));
    }
}

void BitcoinExchange::parseInputFile(const char *filename)
{
    std::ifstream inputFile(filename, std::ifstream::in);
    if (!inputFile.is_open())
        throw NoInputFile();
}

const char *BitcoinExchange::NoDataFile::what() const throw()
{
    return ("There is no data.csv file available.");
}

const char *BitcoinExchange::EmptyDataFile::what() const throw()
{
    return ("The data.csv file is empty.");
}

const char *BitcoinExchange::DataLineOutOfFormat::what() const throw()
{
    return ("There is a line out of format on the data.csv file.");
}

const char *BitcoinExchange::NoInputFile::what() const throw()
{
    return ("There is no input.txt file available");
}
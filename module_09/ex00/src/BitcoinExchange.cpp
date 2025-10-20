/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:59:28 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/20 13:45:54 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

static std::string trim(const std::string str)
{
    std::size_t start = str.find_first_not_of(" \t");
    std::size_t end = str.find_last_not_of(" \t");
    return ((start == std::string::npos) ? "" : str.substr(start, end - start + 1));
}

void BitcoinExchange::parseDatabase()
{
    std::ifstream database("data.csv", std::ifstream::in);
    if (!database.is_open())
        throw NoDataFile();

    std::string line;

    if (!std::getline(database, line))      // Skips first line
        throw EmptyDataFile();              // Empty data file
    if (trim(line) != "date,exchange_rate") // If trimed string is different throw prints a message
        std::cerr << "Invalid file header. Check the data.csv file header." << std::endl;;

    int lineNo = 1;
    while (std::getline(database, line))
    {
        lineNo++;
        std::size_t pos = line.find(',');
        if (pos == std::string::npos)
            throw DataLineOutOfFormat();

        std::string date = line.substr(0, pos);
        std::string rate = line.substr(pos + 1);

        this->_list.insert(std::make_pair(date, std::atof(rate.c_str())));
    }
}

float BitcoinExchange::findValue(const std::string &date) const
{
    std::map<std::string, float>::const_iterator it = this->_list.upper_bound(date);
    if (it == this->_list.begin())
        return it->second; // date is before or equal to the database date or last if no iterator is found
    --it;
    return it->second;
}

void BitcoinExchange::parseInputFile(const char *filename)
{
    std::ifstream inputFile(filename, std::ifstream::in);
    if (!inputFile.is_open())
        throw NoInputFile();

    std::string inputLine;

    // Header check
    if (!std::getline(inputFile, inputLine)) // Skip first line
        std::cerr << "The input.txt file is empty." << std::endl;             // Empty data file 
    if (trim(inputLine) != "date | value")   // If trimed string is different prints an error
        std::cerr << "Invalid file header. Check the input.txt file header." << std::endl;

    int lineNum = 1;
    while (std::getline(inputFile, inputLine))
    {
        lineNum++;
        try
        {
            std::size_t inputPos = inputLine.find('|');
            if (inputPos == std::string::npos)
                throw InputLineOutOfFormat();

            std::string inputDate = trim(inputLine.substr(0, inputPos));
            std::string inputValue = trim(inputLine.substr(inputPos + 1));

            if (inputDate.empty() || inputValue.empty())
                throw InputLineOutOfFormat();

            struct tm tm = {};
            if (!strptime(inputDate.c_str(), "%Y-%m-%d", &tm) || !checkValidDate(tm))
                throw InvalidDate();

            char *pEnd;
            float value = std::strtof(&inputValue[0], &pEnd);
            if (*pEnd != '\0')
                throw InvalidNumber();
            if (value < 0 || value > 1000)
                throw ValueOutofRange();

            float rate = findValue(inputDate); // change later to the appropriate function

            std::cout << inputDate << " => " << inputValue << " = " << value * rate << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Line " << lineNum << " | Error: " << e.what() << std::endl;
        }
    }
}

bool BitcoinExchange::checkValidDate(const tm &date)
{
    int year = date.tm_year + 1900;
    switch (date.tm_mon)
    {
    case 1:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Leap year
        {
            return (date.tm_mday <= 29);
        }
        else
        {
            return (date.tm_mday <= 28); // Other years
        }
    case 3:
    case 5:
    case 8:
    case 10:
        return (date.tm_mday <= 30);
    default:
        return (date.tm_mday <= 31);
    }
}

BitcoinExchange::BitcoinExchange(const char *file)
{
    parseDatabase();
    parseInputFile(file);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _list(other._list) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this == &other)
        return (*this);
    this->_list = other._list;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

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
    return ("There is no input.txt file available.");
}

const char *BitcoinExchange::InputLineOutOfFormat::what() const throw()
{
    return ("There is a line out of format on the input.txt file.");
}

const char *BitcoinExchange::InvalidDate::what() const throw()
{
    return ("Date format is invalid.");
}

const char *BitcoinExchange::InvalidNumber::what() const throw()
{
    return ("Number format is invalid.");
}

const char *BitcoinExchange::ValueOutofRange::what() const throw()
{
    return ("Value is out of range. Use values between 0 and 1000.");
}

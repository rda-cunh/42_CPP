/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 18:37:01 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/23 18:37:01 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

void checkArgs(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Number of arguments not valid." << std::endl;
        exit(1);
    }
    std::string strToFind = argv[2];
    if (strToFind.empty())
    {
        std::cout << "String cannot be empty." << std::endl; 
        exit(1);
    }
}

std::string findAndReplace(std::string toFind, std::string toReplace, std::string line)
{
    size_t      startPos = 0;

    while ((startPos = line.find(toFind, startPos)) != std::string::npos)
    {
        line.erase(startPos, toFind.length());
        line.insert(startPos, toReplace);
        startPos += toReplace.length();
    }
    return (line);
}

int main(int argc, char **argv)
{
    checkArgs(argc, argv);
    std::ifstream inFile;
    inFile.open(argv[1], std::ios::in);
    if (inFile.fail())
        return (std::cout << "File annot be open." << std::endl, 1); 
    else
    {
        std::ofstream outFile;
        std::string inFileName = argv[1];
        inFileName += ".replace";
        outFile.open(inFileName.c_str(), std::ios::out);
        std::string line;
        if (outFile.is_open())
        {
            while (getline(inFile, line))
                outFile << findAndReplace(argv[2], argv[3], line) << std::endl;
        }
        inFile.close();
        outFile.close();
    }
    return (0);
}
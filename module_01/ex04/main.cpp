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

int main(int argc, char **argv)
{
    checkArgs(argc, argv);
    std::ifstream inFile(argv[1]);
    if (!inFile.is_open())
    {
        std::cout << "File is open and cannot be read." << std::endl;
        return (1); 
    }
    else
    {
        std::ofstream outFile;
        std::string inFileName = argv[1];
        inFileName += ".replace";
        outFile.open(outFile.c_str(), std::ios::out);
        if (outFile.is_open())
        {

        }
        inFile.close();
        outFile.close();
    }
}
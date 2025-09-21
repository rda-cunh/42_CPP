/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:58:56 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/21 20:06:03 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc != 2)
        {
            std::cerr << "Please provide a correct argument. Run as ./btc input_file_name.txt"
                      << std::endl;
            return (1);
        }
        BitcoinExchange btc(argv[1]);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
        return (1);
    }

    return (0);
}
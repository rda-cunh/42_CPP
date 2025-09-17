/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:58:56 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/09/17 13:49:18 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        std::cerr << "Please provide a correct argument. Run as ./btc file.txt"
                  << std::endl;
    // insure file opens and is not empty
    BitcoinExchange btc(argv[1]);
    return (0);
}
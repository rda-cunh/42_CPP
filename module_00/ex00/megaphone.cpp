/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:40:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/13 00:17:18 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    megaphone(char *str)
{
    while(*str)
        std::cout << (char)std::toupper(*str++);
}

int main(int argc, char **argv)
{
    int i = 1;
    if (argc > 1)
    {
        while (i < argc)
            megaphone(argv[i++]);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0); 
}
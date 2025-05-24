/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 00:13:04 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/24 18:07:19 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl test;
    std::cout << "Here are some tests of the complain function:" << std::endl;
    std::cout << std::endl;
    std::cout << "DEBUG TEST:" << std::endl;
    test.complain("DEBUG");
    std::cout << std::endl;
    std::cout << "INFO TEST:" << std::endl;
    test.complain("INFO");
    std::cout << std::endl;
    std::cout << "WARNING TEST:" << std::endl;
    test.complain("WARNING");
    std::cout << std::endl;
    std::cout << "ERROR TEST:" << std::endl;
    test.complain("ERROR");
    std::cout << std::endl;
    std::cout << "INVALID TEST:" << std::endl;
    test.complain("INVALID");
    return (0);
}
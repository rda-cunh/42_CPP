/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:38:30 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/07/10 21:34:34 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main ()
{
    std::cout << "--- Test 01: Buro A cand can sign a form (same level) ---" << std::endl;
    std::cout << std::endl;
    try
    {
    Bureaucrat BuroA("Buro A", 100);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}
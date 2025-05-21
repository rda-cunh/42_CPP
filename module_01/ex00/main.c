/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:41:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/21 01:20:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string chumpName;
    std::string zombieName;
    Zombie *zombie;

    std::cout << "Let's create some zombies and chumps!" << std::endl;
    std::cout << "Enter the chump name: " << std::endl;
    std::cin >> chumpName;
    std::cout << "Enter the zombie name: " << std::endl;
    std::cin >> zombieName;

    zombie = newZombie(zombieName);
    zombie->announce(),

    randomChump(chumpName);

    delete zombie;
}

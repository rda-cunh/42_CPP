/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 00:21:39 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/21 01:01:05 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie(const std::string &inputname);
    ~Zombie();
    void    announce();
};

Zombie* newZombie( std::string name ); //heap
void randomChump( std::string name ); //stack

#endif

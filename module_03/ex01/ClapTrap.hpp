/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:14:45 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/06 16:07:05 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _atackDamage;

    public:
        ClapTrap();                                 //default constructor
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);            //copy constructor
        ClapTrap &operator=(ClapTrap const &other);  //copy assignment operator   
        ~ClapTrap();                                //destructor

        std::string getName() const;
        int         getHitPoints() const;
        int         getEnergyPoints() const;
        int         getAtackDamage() const;
        void        setName(const std::string& newName);

        void addEnergyPoints(int amount);
        void addHitPoints(int amount);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

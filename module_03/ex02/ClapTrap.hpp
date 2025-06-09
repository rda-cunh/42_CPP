/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:14:45 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/08 09:16:12 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

    public:
        ClapTrap();                                  //default constructor
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);             //copy constructor
        ClapTrap &operator=(ClapTrap const &other);  //copy assignment operator   
        virtual ~ClapTrap();                         //destructor

        std::string getName() const;
        int         getHitPoints() const;
        int         getEnergyPoints() const;
        int         getattackDamage() const;
        void        setName(const std::string& newName);

        void addEnergyPoints(int amount);
        void addHitPoints(int amount);

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

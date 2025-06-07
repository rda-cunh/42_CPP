/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:26:35 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/07 09:40:51 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAPTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();                                 //default constructor
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &other);            //copy constructor
        ScavTrap &operator=(ScavTrap const &other); //copy assignment operator   
        ~ScavTrap();                                //destructor

        void guardGate();
        void attack(const std::string &target);
};

#endif

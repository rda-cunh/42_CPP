/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:04:39 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 12:26:55 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap();                                    //default constructor
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &other);            //copy constructor
        DiamondTrap &operator=(DiamondTrap const &other); //copy assignment operator   
        ~DiamondTrap();                                   //destructor

        using ScavTrap::attack;
        void  whoAmI();
};
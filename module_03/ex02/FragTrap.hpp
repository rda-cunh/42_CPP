/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:26:35 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/09 10:21:39 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();                                 //default constructor
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &other);            //copy constructor
        FragTrap &operator=(FragTrap const &other); //copy assignment operator   
        ~FragTrap();                                //destructor

        void highFivesGuys();
};

#endif

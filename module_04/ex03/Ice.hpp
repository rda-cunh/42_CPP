/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:39:53 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/26 18:48:55 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
    public:
        Ice();                              //Default constructor
        Ice(const Ice &other);              //Copy constructor
        Ice &operator=(const Ice &other);   //Copy assignment operator
        ~Ice();                             //Destructor

        AMateria* clone() const;       
        void use(ICharacter &target);
};

#endif
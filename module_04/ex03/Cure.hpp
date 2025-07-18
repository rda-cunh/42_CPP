/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:52:14 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/26 18:48:47 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
    public:
        Cure();                             //Default Constructor
        Cure(const Cure &other);            //Copy Constructor
        Cure &operator=(const Cure &other); //Copy assignment operator
        ~Cure();                            //Destructor

        AMateria* clone() const;       
        void use(ICharacter &target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:21:19 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 01:13:14 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();                              //default constructor
        Dog(const Dog &other);              //copy constructor
        Dog &operator=(const Dog &other);   //copy assignment operator        
        ~Dog();                             //destructor

        void makeSound() const;
};

#endif

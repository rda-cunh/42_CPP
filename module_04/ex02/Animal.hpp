/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:20:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/25 00:18:20 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();                               //default constructor
        Animal(const Animal &other);            //copy constructor
        Animal &operator=(const Animal &other); //copy assignment operator        
        virtual ~Animal();                      //destructor

        virtual void makeSound() const = 0;     //pure virtual function
        std::string getType() const;
};

#endif

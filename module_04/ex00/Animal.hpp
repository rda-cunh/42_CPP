/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:20:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/14 19:47:35 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();                               //default constructor
        Animal(const Animal &other);            //copy constructor
        Animal &operator=(const Animal &other); //copy assignment operator        
        ~Animal();                              //destructor

        virtual void makeSound() const;
        std::string getType() const;
};

#endif

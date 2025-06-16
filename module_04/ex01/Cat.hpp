/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:21:34 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 01:11:40 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();                              //default constructor
        Cat(const Cat &other);              //copy constructor
        Cat &operator=(const Cat &other);   //copy assignment operator        
        ~Cat();                             //destructor

        void makeSound() const;
};

#endif
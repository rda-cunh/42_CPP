/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:50:47 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 19:40:39 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal();                                      //default constructor
        WrongAnimal(const WrongAnimal &other);              //copy constructor
        WrongAnimal &operator=(const WrongAnimal &other);   //copy assignment operator        
        virtual ~WrongAnimal();                             //destructor

        virtual void makeSound() const;
        std::string getType() const;
};

#endif

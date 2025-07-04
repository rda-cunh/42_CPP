/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:50:47 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/17 00:17:17 by rda-cunh         ###   ########.fr       */
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
        ~WrongAnimal();                                     //destructor

        void makeSound() const;
        std::string getType() const;
};

#endif

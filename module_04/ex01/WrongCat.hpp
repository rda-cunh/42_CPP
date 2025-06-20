/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:51:15 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/06/16 19:45:10 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();                                   //default constructor
        WrongCat(const WrongCat &other);              //copy constructor
        WrongCat &operator=(const WrongCat &other);   //copy assignment operator        
        ~WrongCat();                                  //destructor

        void makeSound() const;
};

#endif
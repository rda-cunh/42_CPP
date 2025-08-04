/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:46:41 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/04 20:35:06 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <ctime>
#include <cstdlib> 


class Base
{
    public:
        virtual ~Base();            //public virtual destructor
        Base * generate(void);      //It randomly instantiates A, B, or C and returns the instance as a Base pointer.
        void identify(Base* p);     //It prints the actual type of the object pointed to by p: "A", "B", or "C".
        void identify(Base& p);     //It prints the actual type of the object referenced by p: "A", "B", or "C" (cannot use a pointer!)  
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:48:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 00:53:17 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _value;
        static const int    _fractionBits = 8;  

    public:
        Fixed();                                //default constructor: Initializes objects with default values
        Fixed(const Fixed &other);              //copy constructor: Creates a new object by copying an existing one.
        Fixed &operator = (Fixed const &other); //copy assignement operator: overloads - to assign values from one object to another
        ~Fixed();                               //destructor: Handles resource cleanup when an object is destroyed.
		
        int	getRawBits(void) const;
		void setRawBits(const int raw);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:48:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 01:37:04 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _value;
        static const int    _fractionBits = 8;  

    public:
        Fixed(const int numIntiger);
        Fixed(const float numFloat);
        Fixed();                                //default constructor
        Fixed(const Fixed &other);              //copy constructor
        Fixed &operator = (Fixed const &other); //copy assignement operator
        ~Fixed();                               //destructor
		
        int	getRawBits(void) const;
		void setRawBits(const int raw);
        int toIntiger(void) const;
        float toFloat(void) const;        
};

#endif
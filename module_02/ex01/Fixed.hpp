/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:48:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 19:01:15 by rda-cunh         ###   ########.fr       */
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
        Fixed();                                //default constructor
        Fixed(const float numFloat);
        Fixed(const int numIntiger);
        Fixed(const Fixed &other);              //copy constructor
        Fixed &operator = (Fixed const &other); //copy assignement operator
        ~Fixed();                               //destructor
		
        int	getRawBits(void) const;
		void setRawBits(const int raw);
        float toFloat(void) const;      
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);

#endif

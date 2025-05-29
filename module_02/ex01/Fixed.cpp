/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:49:10 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 14:44:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float numFloat) : _value(numFloat * float(1 << _fractionBits) + (numFloat >= 0 ? 0.5 : -0.5))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int numInt) : _value(numInt * int(1 << _fractionBits) + (numInt >= 0 ? 0.5 : -0.5))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _value(other._value)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->setRawBits(other.getRawBits());
    return (*this);        
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(const int raw)
{
    this->_value = raw; 
}

float Fixed::toFloat() const 
{
    return (float(this->_value) / float(1 << this->_fractionBits));
}

int Fixed::toInt() const
{
    return (int(this->_value) / int (1 << this->_fractionBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &object)
{
    out << object.toFloat();
    return (out);
}

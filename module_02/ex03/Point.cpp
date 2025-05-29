/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:52:59 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 20:27:52 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(Fixed x, Fixed y) : _x(x), _y(y) 
{
    std::cout << "Constructor called" << std::endl; 
}

Point::Point(const Point &other) : _x(other._x), _y(other._y) //copy constructor
{
    std::cout << "Copy constructor called" << std::endl; 
} 

Point &Point::operator=(Point &other) //copy assignement operator
{
    if (this == &other)
        return (*this);
    (Fixed) this->_x = other.getX();
    (Fixed) this->_y = other.getY();
    std::cout << "Copy assignement operator called" << std::endl;
    return (*this);
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() {return (this->_x);}

Fixed Point::getY() {return (this->_y);}



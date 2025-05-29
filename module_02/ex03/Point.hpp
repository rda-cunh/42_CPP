/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:53:02 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 20:29:03 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <cmath>
#include <cstdlib>

class Point
{
    private:
        Fixed const _x;
        Fixed const _y; 

    public:
        Point();                            //default constructor
        Point(Fixed x, Fixed y);
        Point(const Point &other);          //copy constructor
        Point &operator = (Point &other);   //copy assignment operator
        ~Point();                           //destructor
        Fixed getX();
        Fixed getY();        
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif




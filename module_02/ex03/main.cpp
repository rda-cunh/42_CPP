/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:51:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 21:33:00 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

void isInside(const Point &A, const Point &B, const Point &C, const Point Point)
{
    if (bsp(A, B, C, Point))
        std::cout << "Point is inside the triangle." << std::endl;
    else
        std::cout << "Point is not inside the triangle." << std::endl;
}

int main()
{
    Point A(3, 4);
    Point B(8, 4);
    Point C(2, -2);

    Point D(float(4), float(3));                //point inside the triangle
    Point E(float(4.0183), float(3.9));         //point inside the triangle close to the border
    Point F(float(4), float(4));                //point in the border of the triangle
    Point G(float(4.00389), float(4.4035));     //point outside the triangle close to the border
    Point H(float(-4.00389), float(-4.4035));   //point outside the triangle
    Point I(float(2), float(-2));               //point is on the vertex of the triangle
    
    std::cout << "[Point D: inside the triangle]: ";
    isInside(A, B, C, D);
    std::cout << "[Point E: inside the triangle, close to the border]: ";
    isInside(A, B, C, E);
    std::cout << "[Point F: in the border of the triangle]: ";
    isInside(A, B, C, F);
    std::cout << "[Point G: outside the triangle, close to the border]: ";
    isInside(A, B, C, G);
    std::cout << "[Point H: in the triangle vertex]: ";
    isInside(A, B, C, H);

    return (0);
}
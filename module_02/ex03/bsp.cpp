/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:52:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/05/29 21:12:11 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float triangleArea(Point a, Point b, Point c)
{
    float x0 = a.getX().toFloat();
    float x1 = b.getX().toFloat();
    float x2 = c.getX().toFloat();
    float y0 = a.getY().toFloat();
    float y1 = b.getY().toFloat();
    float y2 = c.getY().toFloat();
    float result = (x0 * (y1 - y2) + x1 * (y2 - y0) + x2 * (y0 - y1)) / 2;
    result = fabs(result);
    return (result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float const area1 = triangleArea(a, b, point);
    float const area2 = triangleArea(a, c, point);
    float const area3 = triangleArea(c, b, point);
    float const total_area = triangleArea(a, b, c);

    if (!area1 || !area2 || !area3)
        return (false);
    else if (area1 + area2 + area3 == total_area)
        return (true);
    else
        return (false); 
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:18:47 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 11:59:47 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static float	sign(const Point p1, const Point p2, const Point p3)
{
	return ((p1.getx().toFloat() - p3.getx().toFloat()) * (p2.gety().toFloat() - p3.gety().toFloat())
		- (p2.getx().toFloat() - p3.getx().toFloat()) * (p1.gety().toFloat() - p3.gety().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	sign1 = sign(a, b, point);
	float	sign2 = sign(b, c, point);
	float	sign3 = sign(c, a, point);

	bool	check1 = (sign1 <= 0) && (sign2 <= 0) && (sign3 <= 0);
	bool	check2 = (sign1 >= 0) && (sign2 >= 0) && (sign3 >= 0);

	if (check1 == false && check2 == false)
		return (false);
	return (true);
}

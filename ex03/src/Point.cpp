/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:44 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 11:32:34 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(Fixed x, Fixed y) : x(x), y(y)
{
}

Point::Point(Point const& point) : x(point.x), y(point.y)
{
}

Point&	Point::operator=(const Point& point)
{
	if (this != &point)
	{
		const_cast<Fixed&>(this->x) = point.getx();
		const_cast<Fixed&>(this->y) = point.gety();
	}
	return (*this);
}

Point::~Point()
{
}

Fixed	Point::getx(void) const
{
	return (this->x);
}

Fixed	Point::gety(void) const
{
	return (this->y);
}

std::ostream&	operator<<(std::ostream& out, const Point& point)
{
	out << "x : " << point.getx() << std::endl;
	return (out << "y : " << point.gety() << std::endl);
}

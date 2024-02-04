/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:44 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/04 17:36:10 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
}

Point::Point(const Point& point) : x(point.x), y(point.y)
{
}

Point&  Point::operator=(const Point& point) {
	if (this != &point)
		*this = point;
	return *this;
}

Point::~Point()
{
}

Fixed	Point::getx() const
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

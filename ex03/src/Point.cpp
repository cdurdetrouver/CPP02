/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:44 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/02 17:57:32 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(Fixed x, Fixed y) : x(x), y(y)
{
}

Point::Point(Point const& point)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->x.setRawBits(point.x.getRawBits());
	this->y.setRawBits(point.y.getRawBits());
}

Point&	Point::operator=(Point point)
{
}

Point::~Point()
{
}
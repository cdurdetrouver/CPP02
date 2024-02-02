/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:14 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/02 17:59:12 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const	Fixed x;
		const	Fixed y;
	public:
		Point(void);
		Point(Fixed x, Fixed y);
		Point(Point const& point);
		~Point();

		Point&	Point::operator=(Point point);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
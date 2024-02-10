/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:14 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 11:25:14 by gbazart          ###   ########.fr       */
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

		Point	&operator=(const Point& point);
		Fixed	getx(void) const;
		Fixed	gety(void) const;
};

bool			bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream&	operator<<(std::ostream& out, const Point& point);

#endif
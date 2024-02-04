/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:51:14 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/04 17:32:34 by gbazart          ###   ########.fr       */
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
		Point(const Fixed x, const Fixed y);
		Point(const Point& point);
		~Point();

		Point&	operator=(const Point& point);
		Fixed	getx(void) const;
		Fixed	gety(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Point& point);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

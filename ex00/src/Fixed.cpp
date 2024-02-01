/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:41:03 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 21:10:28 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
}

Fixed::Fixed(Fixed& fixed)
{
}

Fixed::~Fixed()
{
}

void	Fixed::operator=(Fixed point)
{
	this->nbr = point.nbr;
}
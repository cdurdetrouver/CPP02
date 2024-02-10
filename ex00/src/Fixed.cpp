/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:41:03 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 11:21:20 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int bit = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nbr = 0;
}

Fixed::Fixed(const Fixed& fixed) : nbr(fixed.nbr)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		this->nbr = fixed.nbr;
	}
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "Copy constructor called" << std::endl;
	this->nbr = raw;
}
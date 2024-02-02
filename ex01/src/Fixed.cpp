/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:41:03 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/02 17:49:01 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed() : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->nbr = fixed.getRawBits();
}

Fixed::Fixed(const int	nbr)
{
	std::cout << "Int Constructor called" << std::endl;
	this->setRawBits(nbr << bit);
}

Fixed::Fixed(const float	nbr)
{
	std::cout << "Float Constructor called" << std::endl;
	int twopower = 1 << bit;
	int rawval = roundf(nbr * twopower);
	this->setRawBits(rawval);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		this->nbr = fixed.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->nbr = raw;
}

float	Fixed::toFloat( void ) const
{
	return static_cast<float>(this->getRawBits()) / (1 << bit);
}

int		Fixed::toInt( void ) const
{
	return (this->getRawBits() >> bit);
}


std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}
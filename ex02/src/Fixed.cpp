/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:41:03 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/02 17:46:37 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed() : nbr(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->nbr = fixed.getRawBits();
}

Fixed::Fixed(const int	nbr)
{
	// std::cout << "Int Constructor called" << std::endl;
	this->setRawBits(nbr << bit);
}

Fixed::Fixed(const float	nbr)
{
	// std::cout << "Float Constructor called" << std::endl;
	int twopower = 1 << bit;
	int rawval = roundf(nbr * twopower);
	this->setRawBits(rawval);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		this->nbr = fixed.getRawBits();
	}
	return (*this);
}

Fixed	Fixed::operator+(Fixed fixed)
{
	Fixed	res(this->toFloat() + fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator-(Fixed fixed)
{
	Fixed	res(this->toFloat() - fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator*(Fixed fixed)
{
	Fixed	res(this->toFloat() * fixed.toFloat());
	return (res);
}

Fixed	Fixed::operator/(Fixed fixed)
{
	Fixed	res(this->toFloat() / fixed.toFloat());
	return (res);
}

bool	Fixed::operator>(Fixed fixed)
{
	return (this->nbr > fixed.nbr);
}

bool	Fixed::operator<(Fixed fixed)
{
	return (this->nbr < fixed.nbr);
}

bool	Fixed::operator>=(Fixed fixed)
{
	return (this->nbr >= fixed.nbr);
}

bool	Fixed::operator<=(Fixed fixed)
{
	return (this->nbr <= fixed.nbr);
}

bool	Fixed::operator==(Fixed fixed)
{
	return (this->nbr == fixed.nbr);
}

bool	Fixed::operator!=(Fixed fixed)
{
	return (this->nbr != fixed.nbr);
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

Fixed&		Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed&		Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	return (fixed1.getRawBits() < fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed&		Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed&		Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	return (fixed1.getRawBits() > fixed2.getRawBits() ? fixed1 : fixed2);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}

Fixed&				Fixed::operator++(void)
{
	++this->nbr;
	return (*this);
}

Fixed				Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed&				Fixed::operator--(void)
{
	--this->nbr;
	return (*this);
}

Fixed				Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}

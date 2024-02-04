/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:20:15 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/04 17:20:20 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c;

	c = a;
	std::cout << "c (after assignment from a) " << c << std::endl;

	Fixed d = a + b;
	std::cout << "d (a + b) " << d << std::endl;

	Fixed e = a - b;
	std::cout << "e (a - b) " << e << std::endl;

	Fixed f = a / b;
	std::cout << "f (a / b) " << f << std::endl;

	Fixed i = b * b;
	std::cout << "i (b * b): " << i << std::endl;


	std::cout << "--a " << --a << std::endl;
	std::cout << "a-- " << a-- << std::endl;
	std::cout << "a " << a << std::endl;

	std::cout << "++a " << ++a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a " << a << std::endl;

	std::cout << "Raw bits of a: " << a.getRawBits() << std::endl;
	a.setRawBits(1234);
	std::cout << "Raw bits of a (after setRawBits): " << a.getRawBits() << std::endl;

	std::cout << "a as float: " << a.toFloat() << std::endl;
	std::cout << "a as int: " << a.toInt() << std::endl;

	std::cout << "Min of a and b: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max of a and b: " << Fixed::max(a, b) << std::endl;

	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	return 0;
}

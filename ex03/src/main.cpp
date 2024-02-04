/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:19:50 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/04 17:25:40 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(Fixed(-1), Fixed(1));
	Point b(Fixed(0), Fixed(0));
	Point c(Fixed(0), Fixed(-1));
	Point d(Fixed(1), Fixed(1));

	std::cout << "	a : " << std::endl << a << "	b : " << std::endl << b << "	c : " << std::endl << c << "	d : " << std::endl << d << std::endl;

	std::cout << "d in triangle a, b, c : " << (bsp(a, b, c, d) ? "true" : "false") << std::endl;
	std::cout << "a in triangle b, c, d : " << (bsp(b, c, d, a) ? "true" : "false") << std::endl;
	std::cout << "b in triangle a, c, d : " << (bsp(a, c, d, b) ? "true" : "false") << std::endl;
	std::cout << "c in triangle a, b, d : " << (bsp(a, b, d, c) ? "true" : "false") << std::endl;

	return 0;
}

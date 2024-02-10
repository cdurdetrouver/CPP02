/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:41:17 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 12:05:20 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	// Points for the triangle
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(5), Fixed(0));
	Point c(Fixed(2.5f), Fixed(5));


	std::cout << "Point inside the triangle :" << std::endl;
	Point d(Fixed(2.5f), Fixed(1.6f));
	std::cout << "d in triangle a, b, c : " << (bsp(a, b, c, d) ? "true" : "false") << std::endl;

	std::cout << std::endl;

	std::cout << "Point outside the triangle :" << std::endl;
	Point e(Fixed(20), Fixed(20));
	std::cout << "e in triangle a, b, c : " << (bsp(a, b, c, e) ? "true" : "false") << std::endl;

	std::cout << std::endl;

	std::cout << "Point on the edge of the triangle :" << std::endl;
	Point f(Fixed(0), Fixed(0));
	std::cout << "f in triangle a, b, c : " << (bsp(a, b, c, f) ? "true" : "false") << std::endl;

	std::cout << std::endl;

	std::cout << "Point at the same location as one of the triangle's vertices :" << std::endl;
	std::cout << "b in triangle a, b, c : " << (bsp(a, b, c, b) ? "true" : "false") << std::endl;

	return 0;
}

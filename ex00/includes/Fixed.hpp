/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:40:34 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/01 21:09:20 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	nbr;
		static const int bit = 8;
	public:
		Fixed(void);
		Fixed(Fixed &fixed);
		~Fixed();

		void	operator=(Fixed fixed);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
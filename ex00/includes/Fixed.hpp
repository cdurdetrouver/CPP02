/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:40:34 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/02 15:00:55 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	nbr;
		static const int bit;
	public:
		Fixed(void);
		Fixed(Fixed &fixed);
		~Fixed();

		void	operator=(Fixed fixed);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
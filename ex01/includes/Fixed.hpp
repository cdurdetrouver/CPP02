/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:40:34 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/02 16:33:32 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					nbr;
		static const int	bit;
	public:
		Fixed(void);
		Fixed(const int	nbr);
		Fixed(const float	nbr);
		Fixed(Fixed const& fixed);
		~Fixed();

		Fixed&				operator=(Fixed fixed);
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		float				toFloat( void ) const;
		int					toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
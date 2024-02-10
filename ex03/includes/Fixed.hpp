/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:40:34 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 11:25:06 by gbazart          ###   ########.fr       */
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

		bool				operator>(Fixed fixed);
		bool				operator<(Fixed fixed);
		bool				operator>=(Fixed fixed);
		bool				operator<=(Fixed fixed);
		bool				operator==(Fixed fixed);
		bool				operator!=(Fixed fixed);

		Fixed				&operator=(const Fixed &fixed);
		Fixed				operator+(Fixed fixed);
		Fixed				operator-(Fixed fixed);
		Fixed				operator*(Fixed fixed);
		Fixed				operator/(Fixed fixed);

		Fixed&				operator++(void);
		Fixed				operator++(int);
		Fixed&				operator--(void);
		Fixed				operator--(int);

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		float				toFloat( void ) const;
		int					toInt( void ) const;

		static	Fixed&			min(Fixed& fixed1, Fixed& fixed2);
		static	const Fixed&	min(Fixed const& fixed1, Fixed const& fixed2);
		static	Fixed&			max(Fixed& fixed1, Fixed& fixed2);
		static	const Fixed&	max(Fixed const& fixed1, Fixed const& fixed2);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
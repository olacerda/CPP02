/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:52:59 by otlacerd          #+#    #+#             */
/*   Updated: 2026/11/04 03:51:38 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	frac_bits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& object);
		Fixed&	operator=(const Fixed& object);

		Fixed(float value);
		Fixed(int value);
		
		bool	operator<(const Fixed& object);
		bool	operator>(const Fixed& object);
		bool	operator>=(const Fixed& object);
		bool	operator<=(const Fixed& object);
		bool	operator==(const Fixed& object);
		bool	operator!=(const Fixed& object);

		Fixed	operator+(const Fixed& object);
		Fixed	operator-(const Fixed& object);
		Fixed	operator*(const Fixed& object);
		Fixed	operator/(const Fixed& object);

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		bool	operator>(Fixed const& object) const;
		static	Fixed&	min(Fixed& object_a, Fixed& object_b);
		static	Fixed const&	min(Fixed const& object_a, Fixed const& object_b);
		static	Fixed&	max(Fixed& object_a, Fixed& object_b);
		static	Fixed const&	max(Fixed const& object_a, Fixed const& object_b);

		float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream& a, const Fixed& b);

#endif
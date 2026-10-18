/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 00:25:09 by olacerda          #+#    #+#             */
/*   Updated: 2026/10/18 20:09:16 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	frac_bits;

	public:
		Fixed();
		Fixed(const int& a);
		Fixed(const float& a);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed&				operator=(const Fixed& object);	
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream& operator<<(std::ostream& a, const Fixed& b);

#endif
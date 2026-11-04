/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 00:25:09 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/04 03:46:17 by olacerda         ###   ########.fr       */
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
		Fixed(const Fixed& other);
		Fixed&				operator=(const Fixed& object);

		Fixed(const int& a);
		Fixed(const float& a);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream& operator<<(std::ostream& a, const Fixed& b);

#endif
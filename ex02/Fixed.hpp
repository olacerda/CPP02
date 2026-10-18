/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:52:59 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/18 20:28:47 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					value;
		static const int	frac_bits;

	public:
		Fixed();
		Fixed(const Fixed& object);
		Fixed&	operator=(const Fixed& object);
		~Fixed();
		bool	operator<(const Fixed& object);
		bool	operator
};

#endif
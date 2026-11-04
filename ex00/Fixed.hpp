/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 00:25:09 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/03 16:43:32 by olacerda         ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed& other);
		Fixed&				operator=(const Fixed& other);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
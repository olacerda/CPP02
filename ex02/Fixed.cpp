/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:52:56 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/18 20:28:41 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {};

Fixed::Fixed(const Fixed& object)
{
	this->value = object.value;
}

Fixed&	Fixed::operator=(const Fixed& object)
{
	this->value = object.value;
	return *this;
}

Fixed::~Fixed() {};

bool	Fixed::operator<(const Fixed& object)
{
	return this->value < object.value;
}

bool	
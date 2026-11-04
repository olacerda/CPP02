/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:52:56 by otlacerd          #+#    #+#             */
/*   Updated: 2026/11/04 05:18:51 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// CONSTRUCTORS ----------------------------------------------------------------

const int Fixed::frac_bits = 8;

Fixed::Fixed() {};

Fixed::~Fixed() {};

Fixed::Fixed(const Fixed& object)
{
	this->value = object.value;
}

Fixed::Fixed(float value)
{
	this->value = roundf(value * (1 << this->frac_bits));
}

Fixed::Fixed(int value)
{
	this->value = value * (1 << this->frac_bits);
}

Fixed&	Fixed::operator=(const Fixed& object)
{
	this->value = object.value;
	return *this;
}


// LOGIC OPERATORS (Booleans) --------------------------------------------------


bool	Fixed::operator>(const Fixed& object)
{
	return this->value > object.value;
}

bool	Fixed::operator<(const Fixed& object)
{
	return this->value < object.value;
}

bool	Fixed::operator>=(const Fixed& object)
{
	return this->value >= object.value;
}

bool	Fixed::operator<=(const Fixed& object)
{
	return this->value <= object.value;
}

bool	Fixed::operator==(const Fixed& object)
{
	return this->value == object.value;
}

bool	Fixed::operator!=(const Fixed& object)
{
	return this->value != object.value;
}


// ARITHIMETIC OPERATORS -------------------------------------------------------


Fixed	Fixed::operator+(const Fixed& object)
{
	return Fixed(static_cast<float>(this->value + object.value) / (1 << this->frac_bits));
}

Fixed	Fixed::operator-(const Fixed& object)
{
	return Fixed(static_cast<float>(this->value - object.value) / (1 << this->frac_bits));
}

Fixed	Fixed::operator*(const Fixed& object)
{
	return Fixed(static_cast<float>(this->value * object.value) / ((1 << this->frac_bits) * (1 << object.frac_bits)));
}

Fixed	Fixed::operator/(const Fixed& object)
{
	return Fixed(static_cast<float>(this->value * (1 << object.frac_bits)) / ((1 << this->frac_bits) * (1 << object.value)));
}


// INCREMENT OPERATORS ---------------------------------------------------------


Fixed&	Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	this->value++;
	return Fixed(static_cast<float>(this->value - 1) / (1 << this->frac_bits));
}

Fixed&	Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	this->value--;
	return Fixed((this->value + 1) / (1 << this->frac_bits));
}


// MIN & MAX Member Functions --------------------------------------------------


bool			Fixed::operator>(const Fixed& object) const
{
	return this->value > object.value;
}

Fixed&			Fixed::min(Fixed& object_a, Fixed& object_b)
{
	if (object_a > object_b)
		return object_b;
	return object_a;
}

const Fixed&	Fixed::min(const Fixed& object_a, const Fixed& object_b)
{
	if (object_a > object_b)
		return object_b;
	return object_a;
}

Fixed&			Fixed::max(Fixed& object_a, Fixed& object_b)
{
	if (object_a > object_b)
		return object_a;
	return object_b;
}

const Fixed&	Fixed::max(const Fixed& object_a, const Fixed& object_b)
{
	if (object_a > object_b)
		return object_a;
	return object_b;
}


// Utils -----------------------------------------------------------------------


float	Fixed::toFloat() const
{
	return static_cast<float>(this->value) / (1 << this->frac_bits);
}

std::ostream& operator<<(std::ostream& a, const Fixed& b)
{
	a << b.toFloat();
	return a;
}

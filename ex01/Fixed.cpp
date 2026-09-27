/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 00:25:00 by olacerda          #+#    #+#             */
/*   Updated: 2026/09/27 02:25:35 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::frac_bits = 8;

Fixed::Fixed() {};

Fixed::Fixed(const int a)
{	
	this->value = a << this->frac_bits;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float a)
{	
	this->value = roundf(a);
	// this->value = static_cast<int>(a * (1 << this->frac_bits) + 0.5);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	this->value = other.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	this->value = other.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits(void)	const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return 	static_cast<float>(this->value) / (1 << this->frac_bits);
}

int	Fixed::toInt(void)
{
	return static_cast<int>(this->value);
}
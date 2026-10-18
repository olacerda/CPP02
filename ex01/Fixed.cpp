/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 00:25:00 by olacerda          #+#    #+#             */
/*   Updated: 2026/10/18 19:32:05 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::frac_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int& a)
{	
	this->value = a << this->frac_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float& a)
{	
	this->value = roundf(a * (1 << this->frac_bits));
	std::cout << "Float constructor called" << std::endl;
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

int	Fixed::toInt(void) const
{
	return this->value / (1 << this->frac_bits);
}

std::ostream& operator<<(std::ostream& a, const Fixed& b)
{
	a << b.toFloat();
	return a;
}

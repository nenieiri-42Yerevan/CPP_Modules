/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:08:02 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/21 20:23:06 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_value = 0;
}

Fixed::Fixed(const int value)
{
	this->_value = value << this->_point;
}

Fixed::Fixed(const float value)
{
	this->_value = (int)roundf(value * (1 << this->_point));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	float	res;

	res = (float)this->_value / (1 << this->_point);
	return (res);
}

int	Fixed::toInt(void) const
{
	int	res;

	res = this->_value >> this->_point;
	return (res);
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	sum;

	sum.setRawBits(this->getRawBits() + other.getRawBits());
	return (sum);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	diff;
	
	diff.setRawBits(this->getRawBits() - other.getRawBits());
	return (diff);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	multiple;

	multiple.setRawBits((this->getRawBits() * other.getRawBits()) >> this->_point);
	return (multiple);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	if (other.getRawBits() == 0)
		throw std::logic_error("Division by zero");
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

Fixed	&Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

const Fixed	&Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed	&Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

const Fixed	&Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

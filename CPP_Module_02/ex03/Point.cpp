/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:25:17 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/23 12:13:00 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point &other) : _x(other.getFloatX()), _y(other.getFloatY())
{
}

Point	&Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Point::~Point(void)
{
}

int	Point::getX(void) const
{
	return (this->_x.toInt());
}

int	Point::getY(void) const
{
	return (this->_y.toInt());
}

float	Point::getFloatX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getFloatY(void) const
{
	return (this->_y.toFloat());
}

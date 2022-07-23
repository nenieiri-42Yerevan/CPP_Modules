/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:20:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/23 12:42:59 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &other);
		Point	&operator=(const Point &other);
		~Point(void);
	public:
		int		getX(void) const;
		int		getY(void) const;
		float	getFloatX(void) const;
		float	getFloatY(void) const;
	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif

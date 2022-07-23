/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:52:11 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/23 11:49:23 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static int	sign(const Point p1, const Point p2, const Point p3)
{
	int	tmp;

	tmp = ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - 
			(p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
	return (tmp);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	int		s1, s2, s3;
	bool	has_neg, has_pos;

	s1 = sign(point, a, b);
	s2 = sign(point, b, c);
	s3 = sign(point, c, a);

	has_neg = (s1 <= 0) || (s2 <= 0) || (s3 <= 0);
	has_pos = (s1 >= 0) || (s2 >= 0) || (s3 >= 0);

	return (!(has_neg && has_pos));
}

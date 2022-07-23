/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:17:54 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/23 12:10:44 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

static void	printData(const Point& a, const Point& b, const Point& c, const Point& p)
{
	std::cout << "Triangle vertices are ";
	std::cout << "A(" << a.getFloatX() << ", " << a.getFloatY() << "), ";
	std::cout << "B(" << b.getFloatX() << ", " << b.getFloatY() << "), ";
	std::cout << "C(" << c.getFloatX() << ", " << c.getFloatY() << ")";
	std::cout << std::endl <<"Point P is ";
	std::cout << "P(" << p.getFloatX() << ", " << p.getFloatY() << ")\n";
}

static void	test(const Point& a, const Point& b, const Point& c, const Point& p)
{
	printData(a, b, c, p);
	if (bsp(a, b, c, p))
		std::cout << "Point P is in the triangle ABC!" << std::endl;
	else
		std::cout << "Point P is NOT in the triangle ABC!" << std::endl;
}

int	main(void)
{
	Point	a1, b1(0, 4), c1(5, 0);
	Point	p1(1, 1);
	test(a1, b1, c1, p1);
	std::cout << std::endl;

	Point	a2, b2(0, 4), c2(5, 0);
	Point	p2(0, 0);
	test(a2, b2, c2, p2);
	std::cout << std::endl;

	Point	a3, b3(0, 4), c3(5, 0);
	Point	p3(0, 1);
	test(a3, b3, c3, p3);
	std::cout << std::endl;

	Point	a4(0.f, 0.f), b4(10.f, 30.f), c4(20.f, 0.f);
	Point	p4(10.f, 15.f);
	test(a4, b4, c4, p4);
	std::cout << std::endl;

	return (0);
}

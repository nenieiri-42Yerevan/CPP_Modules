/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:17:54 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/21 20:15:49 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl << std::endl;

	Fixed	z0(23.41f);
	Fixed	z1(23.4f);
	Fixed	z2(23.41f);
	Fixed	z3(23.00f);
	Fixed	z4(23);
	Fixed	z5(0);
	Fixed	z6(-1);
	Fixed	z7(46.82f);

	// >
	std::cout << "Test 00: \">\"" << std::endl;
	std::cout << z0 << " > " << z1 << " | res " << (z0 > z1) << std::endl;
	std::cout << z0 << " > " << z2 << " | res " << (z0 > z2) << std::endl;
	std::cout << z3 << " > " << z4 << " | res " << (z3 > z4) << std::endl;
	std::cout << z6 << " > " << z5 << " | res " << (z6 > z5) << std::endl << std::endl;
	
	// <
	std::cout << "Test 01: \"<\"" << std::endl;
	std::cout << z0 << " < " << z1 << " | res " << (z0 < z1) << std::endl;
	std::cout << z0 << " < " << z2 << " | res " << (z0 < z2) << std::endl;
	std::cout << z3 << " < " << z4 << " | res " << (z3 < z4) << std::endl;
	std::cout << z6 << " < " << z5 << " | res " << (z6 < z5) << std::endl << std::endl;

	// >=
	std::cout << "Test 02: \">=\"" << std::endl;
	std::cout << z0 << " >= " << z1 << " | res " << (z0 >= z1) << std::endl;
	std::cout << z0 << " >= " << z2 << " | res " << (z0 >= z2) << std::endl;
	std::cout << z3 << " >= " << z4 << " | res " << (z3 >= z4) << std::endl;
	std::cout << z6 << " >= " << z5 << " | res " << (z6 >= z5) << std::endl << std::endl;

	// <=
	std::cout << "Test 03: \"<=\"" << std::endl;
	std::cout << z0 << " <= " << z1 << " | res " << (z0 <= z1) << std::endl;
	std::cout << z0 << " <= " << z2 << " | res " << (z0 <= z2) << std::endl;
	std::cout << z3 << " <= " << z4 << " | res " << (z3 <= z4) << std::endl;
	std::cout << z6 << " <= " << z5 << " | res " << (z6 <= z5) << std::endl << std::endl;

	// ==
	std::cout << "Test 04: \"==\"" << std::endl;
	std::cout << z0 << " == " << z1 << " | res " << (z0 == z1) << std::endl;
	std::cout << z0 << " == " << z2 << " | res " << (z0 == z2) << std::endl;
	std::cout << z3 << " == " << z4 << " | res " << (z3 == z4) << std::endl;
	std::cout << z6 << " == " << z5 << " | res " << (z6 == z5) << std::endl << std::endl;

	// !=
	std::cout << "Test 05: \"!=\"" << std::endl;
	std::cout << z0 << " != " << z1 << " | res " << (z0 != z1) << std::endl;
	std::cout << z0 << " != " << z2 << " | res " << (z0 != z2) << std::endl;
	std::cout << z3 << " != " << z4 << " | res " << (z3 != z4) << std::endl;
	std::cout << z6 << " != " << z5 << " | res " << (z6 != z5) << std::endl << std::endl;

	// +
	std::cout << "Test 06: \"+\"" << std::endl;
	std::cout << z0 << " + " << z1 << " = " << (z0 + z1) << std::endl;
	std::cout << z6 << " + " << z2 << " = " << (z6 + z2) << std::endl;
	std::cout << z6 << " + " << z5 << " = " << (z6 + z5) << std::endl << std::endl;

	// -
	std::cout << "Test 07: \"-\"" << std::endl;
	std::cout << z0 << " - " << z1 << " = " << (z0 - z1) << std::endl;
	std::cout << z6 << " - " << z2 << " = " << (z6 - z2) << std::endl;
	std::cout << z5 << " - " << z6 << " = " << (z5 - z6) << std::endl << std::endl;

	// *
	std::cout << "Test 08: \"*\"" << std::endl;
	std::cout << z0 << " * " << z1 << " = " << (z0 * z1) << std::endl;
	std::cout << z6 << " * " << z2 << " = " << (z6 * z2) << std::endl;
	std::cout << z5 << " * " << z6 << " = " << (z5 * z6) << std::endl << std::endl;

	// /
	std::cout << "Test 09: \"/\"" << std::endl;
	std::cout << z7 << " / " << z0 << " = " << (z7 / z0) << std::endl;
	std::cout << z2 << " / " << z6 << " = " << (z2 / z6) << std::endl;
	std::cout << z5 << " / " << z6 << " = " << (z5 / z6) << std::endl << std::endl;
	std::cout << z7 / z5 << std::endl;
	return (0);
}

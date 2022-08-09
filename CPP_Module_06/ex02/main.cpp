/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:46:15 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/09 14:12:03 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "MyColors.hpp"

Base	*generate(void)
{
	switch (rand() % 3)
	{
		case 0: return (new A);
		case 1: return (new B);
		case 2: return (new C);
	}
	return (0);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << COLOR_GREEN_B << "A" << COLOR_END << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << COLOR_BLUE_B << "B" << COLOR_END << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << COLOR_PURPLE_B << "C" << COLOR_END << std::endl;
}

void	identify(Base &p)
{
	Base	base;

	try
	{
		base = dynamic_cast<A &>(p);
		std::cout << COLOR_GREEN_B << "A" << COLOR_END << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		base = dynamic_cast<B &>(p);
		std::cout << COLOR_BLUE_B << "B" << COLOR_END << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		base = dynamic_cast<C &>(p);
		std::cout << COLOR_PURPLE_B << "C" << COLOR_END << std::endl;
	}
	catch (const std::exception &e) {}
}

int	main()
{
	Base	*base[5];
	
	srand(time(NULL));
	std::cout << COLOR_YELLOW_B << "---- Pointers ----" << COLOR_END << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		base[i] = generate();
		identify(base[i]);
	}
	std::cout << COLOR_YELLOW_B << "--- Referances ---" << COLOR_END << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		identify(*base[i]);
		delete base[i];
	}
	std::cout << COLOR_YELLOW_B << "----- Others -----" << COLOR_END << std::endl;
	A	a;
	identify(&a);
	identify(a);
	B	b;
	identify(&b);
	identify(b);
	C	c;
	identify(&c);
	identify(c);

	return (0);
}

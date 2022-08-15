/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:47:47 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/15 18:26:26 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int	main()
{
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int>	v;
	for (int i = 0; i < 10001; ++i)
		v.push_back(i * 3);

	Span	big(10001);
	big.addNumber(v.begin(), v.end());

	std::cout << std::endl;
	std::cout << big.shortestSpan() << std::endl;
	std::cout << big.longestSpan() << std::endl;

	Span	small(1);

	std::cout << std::endl;
	try
	{
		small.addNumber(1);
		small.addNumber(2);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		small.shortestSpan();
		small.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

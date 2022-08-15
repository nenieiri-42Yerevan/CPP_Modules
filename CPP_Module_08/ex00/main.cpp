/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:09:16 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/15 13:37:39 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main()
{
	// Vector
	std::vector<int>	vector(10);

	std::cout << "Vector size: " << vector.size() << std::endl;
	for (size_t i = 0; i < vector.size(); ++i)
		vector[i] = i;

	std::cout << "Vector values:";
	for (size_t i = 0; i < vector.size(); ++i)
		std::cout << ' ' << vector[i];
	std::cout << std::endl;

	std::vector<int>::iterator	it_vector;
	try
	{
		std::cout << "Found: " << *easyfind(vector, 0) << std::endl;
		std::cout << "Found: " << *easyfind(vector, 3) << std::endl;
		it_vector = easyfind(vector, 9);
		std::cout << "Found: " << *it_vector << std::endl;
		it_vector = easyfind(vector, 11);
		std::cout << "Found: " << *it_vector << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// list
	std::list<int>	list;
	std::cout << std::endl << "List siez: " << list.size() << std::endl;
	for (int i = 0; i < 10; ++i)
		list.push_back(i);

	std::cout << "List values:";
	std::list<int>::iterator it_list = list.begin();
	while (it_list != list.end())
	{
		std::cout << ' ' << *it_list;
		++it_list;
	}
	std::cout << std::endl;

	try
	{
		it_list = easyfind(list, 0);
		std::cout << "Found: " << *it_list << std::endl;
		std::cout << "Found: " << *easyfind(list, 9) << std::endl;
		it_list = easyfind(list, 10);
		std::cout << "Found: " << *it_list << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

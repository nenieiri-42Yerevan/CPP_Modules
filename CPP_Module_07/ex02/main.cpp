/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:20:06 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/11 18:54:41 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Array.hpp"

int	main()
{
	Array<int>	*int_arr = new Array<int>();

	std::cout << "int_arr size: " << int_arr->size() << std::endl << std::endl;
	delete int_arr;

	Array<int>	arr_1(5);
	for (unsigned int i = 0; i < arr_1.size(); ++i)
		arr_1[i] = i * 2;

	std::cout << "arr_1 size: " << arr_1.size() << std::endl;
	for (unsigned int i = 0; i < arr_1.size(); ++i)
		std::cout << "arr_1 [" << i << "] = " << arr_1[i] << std::endl;

	std::cout << std::endl;

	Array<int>	*copy_arr_1 = new Array<int>(arr_1);
	for (unsigned int i = 0; i < copy_arr_1->size(); ++i)
		std::cout << "copy_arr_1 [" << i << "] = " << (*copy_arr_1)[i] << std::endl;

	std::cout << std::endl;

	Array<int>	arr_2(9);
	for (unsigned int i = 0; i < arr_2.size(); ++i)
		arr_2[i] = i;

	arr_1 = arr_2;

	std::cout << "arr_1 size: " << arr_1.size() << std::endl;
	for (unsigned int i = 0; i < arr_1.size(); ++i)
		std::cout << "arr_1 [" << i << "] = " << arr_1[i] << std::endl;

	Array<std::string>	str_arr(3);
	str_arr[0] = "Nenie";
	str_arr[1] = " ";
	str_arr[2] = "Iri";

	std::string	line = str_arr[0] + str_arr[1] + str_arr[2];

	std::cout << "Str size: " << str_arr.size() << std::endl;
	std::cout << "Str: " << line << std::endl;

	delete copy_arr_1;

	try
	{
		std::cout << std::endl << arr_1[arr_1.size()] << std::endl << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

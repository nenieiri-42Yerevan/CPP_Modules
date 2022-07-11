/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:39:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/11 20:33:10 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void	is_valid(std::string str, index, &i)
{
	if (i != 0)
	{
		if (std::strlen() == 0)
	}
}

void	add_contact()
{
	int			i;
	std::string	fields[5];

	i = 0;
	while (is_valid(fields[0], 0, i) == 0)
	{
		std::cout << "First name: ";
		std::getline(std::cin, fields[0]);
	}
	while (is_valid(fields[1], 1, i) == 0)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, fields[1]);
	}
	while (is_valid(fields[2], 2, i) == 0)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, fields[2]);
	}
	while (is_valid(fields[3], 3, i) == 0)
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, fields[3]);
	}
	while (is_valid(fields[4], 4, i) == 0)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, fields[4]);
	}
}

int	main()
{
	std::string	command;

	std::getline(std::cin, command);
	if (command == "ADD")
		add_contact();
	return (0);
}

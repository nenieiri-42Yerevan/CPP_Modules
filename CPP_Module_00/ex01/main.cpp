/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:39:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/12 13:43:41 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

static void	check_errors(const std::string &str, int elem, int &error)
{
	int	blank;

	blank = 0;
	for (int j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 33 && str[j] <= 126)
		{
			blank++;
			if (elem == 4)
				continue ;
			else if (elem == 3)
			{
				if ((j == 0 && str[j] == '+') || str[j] == ' ' || \
					(str[j] >= '0' && str[j] <= '9'))
					continue ;
				error = 2;
			}
			else if ((str[j] > 32 && str[j] < 48) || \
					(str[j] > 57 && str[j] < 65) || \
					(str[j] > 90 && str[j] < 97))
				error = 3;
		}
	}
	if (blank < 2)
		error = 1;
}

int	is_valid(const std::string &str, int elem, int &i)
{
	int	error;

	error = 0;
	if (i != 0)
	{
		check_errors(str, elem, error);
		if (error > 0)
		{
			if (error == 1)
				std::cout << "The field can't be less than 2 non blank characters.";
			if (error == 2)
				std::cout << "Please input a valid number.";
			if (error == 3)
				std::cout << "You can use only [A-Z], [a-z] or [1-9] characters.";
			std::cout << std::endl;
			return (0);
		}
		i = 0;
		return (1);
	}
	i++;
	return (0);
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

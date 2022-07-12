/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:35:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/12 20:19:55 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

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

static int	is_valid(const std::string &str, int elem, int &i)
{
	int	error;

	error = 0;
	if (i != 0)
	{
		check_errors(str, elem, error);
		if (error > 0)
		{
			std::cout << "\033[1;31m";
			if (error == 1)
				std::cout << "The field can't be less than 2 non blank characters.";
			if (error == 2)
				std::cout << "Please input a valid number.";
			if (error == 3)
				std::cout << "You can use only [A-Z], [a-z] or [1-9] characters.";
			std::cout << "\033[0m";
			std::cout << std::endl;
			return (0);
		}
		i = 0;
		return (1);
	}
	i++;
	return (0);
}

void	add_contact(std::string *fields)
{
	int			i;

	i = 0;
	while (is_valid(fields[0], 0, i) == 0)
	{
		std::cout << "\033[1;33m";
		std::cout << "First name: ";
		std::getline(std::cin, fields[0]);
		std::cout << "\033[0m";
	}
	while (is_valid(fields[1], 1, i) == 0)
	{
		std::cout << "\033[1;33m";
		std::cout << "Last name: ";
		std::getline(std::cin, fields[1]);
		std::cout << "\033[0m";
	}
	while (is_valid(fields[2], 2, i) == 0)
	{
		std::cout << "\033[1;33m";
		std::cout << "Nickname: ";
		std::getline(std::cin, fields[2]);
		std::cout << "\033[0m";
	}
	while (is_valid(fields[3], 3, i) == 0)
	{
		std::cout << "\033[1;33m";
		std::cout << "Phone number: ";
		std::getline(std::cin, fields[3]);
		std::cout << "\033[0m";
	}
	while (is_valid(fields[4], 4, i) == 0)
	{
		std::cout << "\033[1;33m";
		std::cout << "Darkest secret: ";
		std::getline(std::cin, fields[4]);
		std::cout << "\033[0m";
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:39:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/12 16:43:42 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void	add_contact(std::string *fields);

int	main()
{
	PhoneBook	phonebook;
	std::string	command;
	std::string	fields[5];

	while (42)
	{
		std::cout << "Please choose one of the following commands:" << std::endl;
		std::cout << "+-----+--------+------+" << std::endl;
		std::cout << "| ADD | SEARCH | EXIT |" << std::endl;
		std::cout << "+-----+--------+------+" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD" || command == "add")
		{
			std::cout << "Enter contact information" << std::endl;
			add_contact(fields);
			phonebook.add_contact(fields);
			std::cout << "Contact added successfully!" << std::endl;
		}
		else if (command == "SEARCH" || command == "search")
		{
			phonebook.display();
		}
		else if (command == "EXIT" || command == "exit")
			break ;
		else
			std::cout << "Invalid Command." << std::endl;
	}
	return (0);
}

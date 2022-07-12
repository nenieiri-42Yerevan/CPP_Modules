/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:39:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/12 20:14:20 by vismaily         ###   ########.fr       */
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
	int			index;

	while (42)
	{
		std::cout << "\033[1;33m";
		std::cout << "Please choose one of the following commands:";
		std::cout << "( ADD | SEARCH | EXIT )" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, command);
		std::cout << "\033[0m";
		if (command == "ADD" || command == "add")
		{
			std::cout << "\033[1;32m\nEnter contact information\033[0m" << std::endl;
			add_contact(fields);
			phonebook.add_contact(fields);
			std::cout << "\033[1;32mContact added successfully!\n\033[0m" << std::endl;
		}
		else if (command == "SEARCH" || command == "search")
		{
			phonebook.display_phonebook();
			std::cout << "\033[1;33m";
			std::cout << "Whose contact do you want to see (insert index):" << std::endl;
			std::cout << "> ";
			std::cin >> index;
			std::cout << "\033[0m";
			if (std::cin.fail() || index < 0 || index > phonebook.get_size())
				std::cout << "\033[1;31mInvalid index!\033[0m" << std::endl;
			else
				phonebook.display_contact(index);
			std::cin.clear();
			std::getline(std::cin, command);
		}
		else if (command == "EXIT" || command == "exit")
			break ;
		else
			std::cout << "\033[1;31mInvalid Command.\033[0m" << std::endl;
	}
	return (0);
}

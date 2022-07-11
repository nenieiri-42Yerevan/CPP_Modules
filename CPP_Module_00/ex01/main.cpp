/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:39:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/11 19:13:01 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void	add_contact()
{
	std::string	fields[5];	

	std::cout << "First name: ";
	std::getline(std::cin, fields[0]);
	std::cout << "Last name: ";
	std::getline(std::cin, fields[1]);
	std::cout << "Nickname: ";
	std::getline(std::cin, fields[2]);
	std::cout << "Phone number: ";
	std::getline(std::cin, fields[3]);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, fields[4]);
}

int	main()
{
	std::string	command;

	std::getline(std::cin, command);
	if (command == "ADD")
		add_contact();
	return (0);
}

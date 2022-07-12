/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:05:22 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/12 20:14:44 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

static void	my_print(std::string str)
{
	int	j;

	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << '.';
	}
	else
	{
		j = 10 - str.length();
		while (j-- > 0)
			std::cout << " ";
		std::cout << str;
	}
}

void	PhoneBook::add_contact(std::string fields[5])
{
	this->_contacts[this->_insert_index].set_firstname(fields[0]);
	this->_contacts[this->_insert_index].set_lastname(fields[1]);
	this->_contacts[this->_insert_index].set_nickname(fields[2]);
	this->_contacts[this->_insert_index].set_phone(fields[3]);
	this->_contacts[this->_insert_index].set_secret(fields[4]);
	this->_insert_index = (this->_insert_index + 1) % 8;
	if (this->_size < 8)
		(this->_size)++;
}

int	PhoneBook::get_size() const
{
	return (this->_size);
}

void	PhoneBook::display_phonebook() const
{
	int	i;

	i = -1;
	std::cout << "\033[1;32m";
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (++i < this->_size)
	{
		std::cout << "|         ";
		std::cout << i;
		std::cout << "|";
		my_print(this->_contacts[i].get_firstname());
		std::cout << "|";
		my_print(this->_contacts[i].get_lastname());
		std::cout << "|";
		my_print(this->_contacts[i].get_nickname());
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "\033[0m";
}

void	PhoneBook::display_contact(int index) const
{
	std::cout << "\033[1;32m";
	std::cout << "First name: " << this->_contacts[index].get_firstname() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].get_phone() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].get_secret() << std::endl;
	std::cout << "\033[0m";
}

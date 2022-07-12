/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:05:22 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/12 15:36:27 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

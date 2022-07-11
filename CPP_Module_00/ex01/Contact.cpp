/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:41:12 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/11 15:55:27 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_firstname(const std::string &_firstname)
{
	this->_firstname = _firstname;
}

void	Contact::set_lastname(const std::string &_lastname)
{
	this->_lastname = _lastname;
}

void	Contact::set_nickname(const std::string &_nickname)
{
	this->_nickname = _nickname;
}

void	Contact::set_phone(const std::string &_phone)
{
	this->_phone = _phone;
}

void	Contact::set_secret(const std::string &_secret)
{
	this->_secret = _secret;
}

const std::string	&Contact::get_firstname() const
{
	return (this->_firstname);
}

const std::string	&Contact::get_lastname() const
{
	return (this->_lastname);
}

const std::string	&Contact::get_nickname() const
{
	return (this->_nickname);
}

const std::string	&Contact::get_phone() const
{
	return (this->_phone);
}

const std::string	&Contact::get_secret() const
{
	return (this->_secret);
}

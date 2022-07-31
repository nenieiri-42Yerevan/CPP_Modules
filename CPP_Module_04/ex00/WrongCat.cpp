/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:59:13 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 15:40:55 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << "Default constructor of " << this->_type << std::endl;
}

WrongCat::WrongCat(const WrongCat &)
{
	_type = "WrongCat";
	std::cout << "Copy constructor of " << this->_type << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	WrongAnimal::operator=(other);
	std::cout << "Copy assignment operator of " << this->_type << std::endl;

	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << this->_type << " has been destroyed." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* WrongMeow! *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:59:19 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 15:39:54 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default Constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructor of WrongAnimal" << std::endl;
	this->_type = other.getType();
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Copy assignment operator of WrongAnimal" << std::endl;
	this->_type = other.getType();

	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* Wrong Animal Sound!!! *" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

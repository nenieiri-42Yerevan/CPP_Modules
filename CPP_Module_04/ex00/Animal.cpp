/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:36:38 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 15:36:52 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Constructor of Animal" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructor of Animal" << std::endl;
	this->_type = other.getType();
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator of Animal" << std::endl;
	this->_type = other.getType();

	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor of Animal" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "* Animal Sound!!! *" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return (this->_type);
}

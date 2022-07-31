/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:28:21 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 14:42:08 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "Default constructor of " << this->_type << std::endl;
}

Dog::Dog(const Dog &)
{
	_type = "Dog";
	std::cout << "Copy constructor of " << this->_type << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	std::cout << "Copy assignment operator of " << this->_type << std::endl;

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << this->_type << " has been destroyed." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "* Bark! *" << std::endl;
}

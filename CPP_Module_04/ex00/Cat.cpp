/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:11:54 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 15:36:52 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Default constructor of " << this->_type << std::endl;
}

Cat::Cat(const Cat &)
{
	_type = "Cat";
	std::cout << "Copy constructor of " << this->_type << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	std::cout << "Copy assignment operator of " << this->_type << std::endl;

	return (*this);
}

Cat::~Cat(void)
{
	std::cout << this->_type << " has been destroyed." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "* Meow! *" << std::endl;
}

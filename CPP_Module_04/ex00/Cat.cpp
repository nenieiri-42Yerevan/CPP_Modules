/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:11:54 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/01 14:57:12 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << COLOR_GREEN_B;
	std::cout << "Default constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Cat	&Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment operator of " << this->_type << std::endl;
	std::cout << COLOR_END;

	return (*this);
}

Cat::~Cat(void)
{
	std::cout << COLOR_RED_B;
	std::cout << this->_type << " has been destroyed." << std::endl;
	std::cout << COLOR_END;
}

void	Cat::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* Meow! *" << std::endl;
	std::cout << COLOR_END;
}

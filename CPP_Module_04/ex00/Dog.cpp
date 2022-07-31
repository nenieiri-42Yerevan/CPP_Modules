/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:28:21 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 16:30:21 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << COLOR_GREEN_B;
	std::cout << "Default constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Dog::Dog(const Dog &)
{
	_type = "Dog";
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Dog	&Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment operator of " << this->_type << std::endl;
	std::cout << COLOR_END;

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << COLOR_RED_B;
	std::cout << this->_type << " has been destroyed." << std::endl;
	std::cout << COLOR_END;
}

void	Dog::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* Bark! *" << std::endl;
	std::cout << COLOR_END;
}

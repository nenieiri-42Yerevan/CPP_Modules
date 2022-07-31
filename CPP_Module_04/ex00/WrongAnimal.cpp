/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:59:19 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 16:31:59 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Default Constructor of WrongAnimal" << std::endl;
	std::cout << COLOR_END;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of WrongAnimal" << std::endl;
	std::cout << COLOR_END;
	this->_type = other.getType();
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment operator of WrongAnimal" << std::endl;
	std::cout << COLOR_END;
	this->_type = other.getType();

	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << COLOR_RED_B;
	std::cout << "Destructor of WrongAnimal" << std::endl;
	std::cout << COLOR_END;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* Wrong Animal Sound!!! *" << std::endl;
	std::cout << COLOR_END;
}

const std::string	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

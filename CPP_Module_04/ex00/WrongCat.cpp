/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:59:13 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 16:31:59 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << COLOR_GREEN_B;
	_type = "WrongCat";
	std::cout << "Default constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

WrongCat::WrongCat(const WrongCat &)
{
	std::cout << COLOR_GREEN_B;
	_type = "WrongCat";
	std::cout << "Copy constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << COLOR_GREEN_B;
	WrongAnimal::operator=(other);
	std::cout << "Copy assignment operator of " << this->_type << std::endl;
	std::cout << COLOR_END;

	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << COLOR_RED_B;
	std::cout << this->_type << " has been destroyed." << std::endl;
	std::cout << COLOR_END;
}

void	WrongCat::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* WrongMeow! *" << std::endl;
	std::cout << COLOR_END;
}

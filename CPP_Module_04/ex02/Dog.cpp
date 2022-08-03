/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:28:21 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/03 13:09:37 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << COLOR_GREEN_B;
	std::cout << "Default constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	delete this->_brain;
	_brain = new Brain(*(other._brain));
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Dog	&Dog::operator=(const Dog &other)
{
	AAnimal::operator=(other);
	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(other._brain);
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment operator of " << this->_type << std::endl;
	std::cout << COLOR_END;

	return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << COLOR_RED_B;
	std::cout << "Destructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

void	Dog::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* Bark! *" << std::endl;
	std::cout << COLOR_END;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

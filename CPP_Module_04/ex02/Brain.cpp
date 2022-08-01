/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:20:25 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/01 15:56:05 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	size = 0;
	std::cout << COLOR_GREEN_B;
	std::cout << "Default constructor of Brain" << std::endl;
	std::cout << COLOR_END;
}

Brain::Brain(const Brain &other)
{
	size = other.size;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of Brain" << std::endl;
	std::cout << COLOR_END;
}

Brain	&Brain::operator=(const Brain &other)
{
	size = other.size;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment opeartor of Brain" << std::endl;
	std::cout << COLOR_END;

	return (*this);
}

Brain::~Brain(void)
{
	std::cout << COLOR_RED_B;
	std::cout << "Destructor of Brain" << std::endl;
	std::cout << COLOR_END;
}

void	Brain::setIdea(const std::string &str)
{
	if (size != 100)
		this->_ideas[size++] = str;
}

const std::string	&Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

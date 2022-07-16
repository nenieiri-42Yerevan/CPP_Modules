/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:05:16 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/16 11:44:37 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A zombie has born." << std::endl;
}

Zombie::Zombie(const std::string &name)
{
	_name = name;
	std::cout << _name << " has born." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": died." << std::endl;
}

void	Zombie::set_name(const std::string &name)
{
	this->_name = name;
	std::cout << "A zombie got name " << this->_name << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

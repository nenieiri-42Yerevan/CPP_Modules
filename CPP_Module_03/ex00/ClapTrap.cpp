/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:28:00 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/23 19:01:40 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_hit_Points = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	_name = name;
	_hit_Points = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

int	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << "; causing" << "points of damage!";
	--(this->_hitPoints);
	return (0);
}

int	ClapTrap::beRepaired(unsigned int amount)
{
	++(this->_hitPoints);
	return (0);
}

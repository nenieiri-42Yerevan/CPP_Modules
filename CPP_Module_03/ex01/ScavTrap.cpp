/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:54:13 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/27 15:59:57 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "default constructor has been called";
	std::cout << COLOR_END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "copy constructor has been called.";
	std::cout << COLOR_END << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->_name;
	std::cout << COLOR_GREEN_B;
	std::cout << " created.";
	std::cout << COLOR_END << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->_name;
	std::cout << COLOR_GREEN_B;
	std::cout << " cloned (assignment operator).";
	std::cout << COLOR_END << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->_name;
	std::cout << COLOR_RED_B;
	std::cout << " dead.";
	std::cout << COLOR_END << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->_name;
	std::cout << COLOR_GREEN_B;
	std::cout << " Gate Keeper mode activated.";
	std::cout << COLOR_END << std::endl;
}
void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << COLOR_YELLOW_B;
		std::cout << "ScavTrap " << this->_name;
		std::cout << COLOR_RED_B;
		std::cout << " does not have enough energy to attack> ";
		std::cout << COLOR_GREEN;
		std::cout << "Energy: " << this->_energyPoints << ".";
		std::cout << COLOR_END << std::endl;
	}
	else
	{
		if (this->_energyPoints < 5)
			this->_energyPoints = 0;
		else
			this->_energyPoints = this->_energyPoints - 5;
		std::cout << COLOR_YELLOW_B;
		std::cout << "ScavTrap " << this->_name;
		std::cout << COLOR_BLUE_B;
		std::cout << " attacks " << target << ", causing ";
		std::cout << this->_attackDamage << " points of damage!";
		std::cout << COLOR_GREEN;
		std::cout << " Energy Points: " << this->_energyPoints;
		std::cout << COLOR_END << std::endl;
	}
}

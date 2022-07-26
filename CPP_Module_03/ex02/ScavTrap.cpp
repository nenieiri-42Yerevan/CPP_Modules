/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:54:13 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/26 13:00:24 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "default constructor has been called.";
	std::cout << COLOR_END << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "copy constructor has been called.";
	std::cout << COLOR_END << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->getName();
	std::cout << COLOR_GREEN_B;
	std::cout << " created.";
	std::cout << COLOR_END << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->getName();
	std::cout << COLOR_GREEN_B;
	std::cout << " cloned (assignment operator).";
	std::cout << COLOR_END << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->getName();
	std::cout << COLOR_RED_B;
	std::cout << " dead.";
	std::cout << COLOR_END << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ScavTrap " << this->getName();
	std::cout << COLOR_GREEN_B;
	std::cout << " Gate Keeper mode activated.";
	std::cout << COLOR_END << std::endl;
}
void	ScavTrap::attack(const std::string &target)
{
	if (this->getHitPoints() == 0)
	{
	}
	else if (this->getEnergyPoints() == 0)
	{
		std::cout << COLOR_YELLOW_B;
		std::cout << "ScavTrap " << this->getName();
		std::cout << COLOR_RED_B;
		std::cout << " does not have enough energy to attack> ";
		std::cout << COLOR_GREEN;
		std::cout << "Energy: " << this->getEnergyPoints() << ".";
		std::cout << COLOR_END << std::endl;
	}
	else
	{
		if (this->getEnergyPoints() < 5)
			this->setEnergyPoints(0);
		else
			this->setEnergyPoints(this->getEnergyPoints() - 5);
		std::cout << COLOR_YELLOW_B;
		std::cout << "ScavTrap " << this->getName();
		std::cout << COLOR_BLUE_B;
		std::cout << " attacks " << target << ", causing ";
		std::cout << this->getAttackDamage() << " points of damage!";
		std::cout << COLOR_GREEN;
		std::cout << " Energy Points: " << this->getEnergyPoints();
		std::cout << COLOR_END << std::endl;
	}
}

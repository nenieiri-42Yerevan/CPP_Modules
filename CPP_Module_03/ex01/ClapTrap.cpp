/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:28:00 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/27 12:40:00 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors and the Destructor */
ClapTrap::ClapTrap(void)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ClapTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "default constructor has been called.";
	std::cout << COLOR_END << std::endl;
	_name = "Unnamed";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << COLOR_YELLOW_B;
	std::cout << "ClapTrap " << this->_name;
	std::cout << COLOR_GREEN_B;
	std::cout << " created.";
	std::cout << COLOR_END << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ClapTrap " << this->_name;
	std::cout << COLOR_RED_B;
	std::cout << " dead.";
	std::cout << COLOR_END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "ClapTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "copy constructor has been called.";
	std::cout << COLOR_END << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());
	std::cout << COLOR_YELLOW_B;
	std::cout << "ClapTrap " << this->_name;
	std::cout << COLOR_GREEN_B;
	std::cout << " cloned (assignment operator).";
	std::cout << COLOR_END << std::endl;

	return (*this);
}

/* Setters and Getters */
void	ClapTrap::setName(const std::string &name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int	hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->_attackDamage = attackDamage;
}

const std::string	&ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

/* Action functions*/
void	ClapTrap::attack(const std::string &target)
{
	if (this->getHitPoints() == 0)
	{
	}
	else if (this->getEnergyPoints() == 0)
	{
		std::cout << COLOR_YELLOW_B;
		std::cout << "ClapTrap " << this->getName();
		std::cout << COLOR_RED_B;
		std::cout << " does not have enough energy to attack> ";
		std::cout << COLOR_GREEN;
		std::cout << "Energy: " << this->getEnergyPoints() << ".";
		std::cout << COLOR_END << std::endl;
	}
	else
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << COLOR_YELLOW_B;
		std::cout << "ClapTrap " << this->getName();
		std::cout << COLOR_BLUE_B;
		std::cout << " attacks " << target << ", causing ";
		std::cout << this->getAttackDamage() << " points of damage!";
		std::cout << COLOR_GREEN;
		std::cout << " Energy Points: " << this->getEnergyPoints();
		std::cout << COLOR_END << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
	}
	else
	{
		if (this->getHitPoints() < amount)
			amount = this->getHitPoints();
		this->setHitPoints(this->getHitPoints() - amount);
		std::cout << COLOR_YELLOW_B;
		std::cout << "ClapTrap " << this->getName();
		std::cout << COLOR_RED_B;
		std::cout << " got " << amount << " points of damage!";
		std::cout << COLOR_GREEN;
		std::cout << " Hit Points: " <<	this->getHitPoints();
		std::cout << COLOR_END << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
	}
	else if (this->getEnergyPoints() == 0)
	{
		std::cout << COLOR_YELLOW_B;
		std::cout << "ClapTrap " << this->getName();
		std::cout << COLOR_RED_B;
		std::cout << " does not have enough energy to be repaired.";
		std::cout << COLOR_GREEN;
		std::cout << "Energy: " << this->getEnergyPoints() << ".";
		std::cout << COLOR_END << std::endl;
	}
	else
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		this->setHitPoints(this->getHitPoints() + amount);
		std::cout << COLOR_YELLOW_B;
		std::cout << "ClapTrap " << this->getName();
		std::cout << COLOR_PURPLE_B;
		std::cout << " got repaired by " << amount << " points! ";
		std::cout << COLOR_GREEN;
		std::cout << "Hit Points: " << this->getHitPoints() << ".";
		std::cout << COLOR_END << std::endl;
	}
}

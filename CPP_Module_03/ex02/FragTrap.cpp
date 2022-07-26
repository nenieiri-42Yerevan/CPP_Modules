/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:19:05 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/26 13:44:21 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << COLOR_YELLOW_B;
	std::cout << "FragTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "default constructor has been called.";
	std::cout << COLOR_END << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << COLOR_YELLOW_B;
	std::cout << "FragTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "copy constructor has been called.";
	std::cout << COLOR_END << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << COLOR_YELLOW_B;
	std::cout << "FragTrap " << this->getName();
	std::cout << COLOR_GREEN_B;
	std::cout << " created.";
	std::cout << COLOR_END << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << COLOR_YELLOW_B;
	std::cout << "FragTrap " << this->getName();
	std::cout << COLOR_GREEN_B;
	std::cout << " cloned (assignment operator).";
	std::cout << COLOR_END << std::endl;

	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "FragTrap " << this->getName();
	std::cout << COLOR_RED_B;
	std::cout << " dead.";
	std::cout << COLOR_END << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "FragTrap " << this->getName();
	std::cout << COLOR_GREEN_B;
	std::cout << " High Five guys!";
	std::cout << COLOR_END << std::endl;
}

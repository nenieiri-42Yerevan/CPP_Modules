/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:19:05 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/26 13:00:12 by vismaily         ###   ########.fr       */
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

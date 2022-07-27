/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:04:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/27 13:47:07 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "Unnamed";
	std::cout << COLOR_YELLOW_B;
	std::cout << "DiamondTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "default constructor has been called.";
	std::cout << COLOR_END << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : \
	ClapTrap(other), \
	FragTrap(other), \
	ScavTrap(other)
{
	this->_name = other._name;
	std::cout << COLOR_YELLOW_B;
	std::cout << "DiamondTrap ";
	std::cout << COLOR_GREEN_B;
	std::cout << "copy constructor has been called.";
	std::cout << COLOR_END << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : \
	ClapTrap(name + "_clap_name"), \
	FragTrap(name + "_clap_name"), \
	ScavTrap(name + "_clap_name")
{
	this->_name = name;
	std::cout << COLOR_YELLOW_B;
	std::cout << "DiamondTrap " << this->_name;
	std::cout << COLOR_GREEN_B;
	std::cout << " created.";
	std::cout << COLOR_END << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	FragTrap::operator=(other);
	ScavTrap::operator=(other);
	this->_name = other._name;
	std::cout << COLOR_YELLOW_B;
	std::cout << "DiamondTrap " << this->_name;
	std::cout << COLOR_GREEN_B;
	std::cout << " cloned (assignment operator).";
	std::cout << COLOR_END << std::endl;

	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << COLOR_YELLOW_B;
	std::cout << "DiamondTrap " << this->_name;
	std::cout << COLOR_RED_B;
	std::cout << " dead.";
	std::cout << COLOR_END << std::endl;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "My ClapTrap name is " << this->getName() << '.' << std::endl;
	std::cout << "My DiamondTrap name is " << this->_name << '.';
	std::cout << COLOR_END << std::endl;
}

const std::string	&DiamondTrap::getNameDiamond(void) const
{
	return (this->_name);
}

void	DiamondTrap::setNameDiamond(const std::string &name)
{
	this->_name = name;
	this->setName(name + "_clap_name");
}

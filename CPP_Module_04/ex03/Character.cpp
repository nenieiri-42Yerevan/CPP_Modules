/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:23:57 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/04 19:57:53 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	_size = 0;
}

Character::Character(const std::string &name)
{
	_size = 0;
	_name = name;
}

Character::Character(const Character &other)
{
	this->_name = other._name;
	this->_size = other._size;
	for (int i = 0; i < this->_size; ++i)
		this->_inventory[i] = other._inventory[i]->clone();
}

Character	&Character::operator=(const Character &other)
{
	for (int i = 0; i < this->_size; ++i)
		delete this->_inventory[i];
	this->_name = other._name;
	this->_size = other._size;
	for (int i = 0; i < this->_size; ++i)
		this->_inventory[i] = other._inventory[i]->clone();

	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < this->_size; ++i)
		delete this->_inventory[i];
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_size < 4)
		this->_inventory[(this->_size)++] = m;
	else
		std::cout << "No space" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_size)
	{
		while (++idx < this->_size)
			this->_inventory[idx -1] = this->_inventory[idx];
		this->_size -= 1;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_size)
		this->_inventory[idx]->use(target);
}

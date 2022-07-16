/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:47:13 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/16 19:04:32 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	_type = type;
}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(const std::string &type)
{
	this->_type = type;
}

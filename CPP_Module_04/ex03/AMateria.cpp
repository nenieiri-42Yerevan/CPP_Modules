/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:18:27 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/04 19:43:22 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	this->_type = other._type;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
	this->_type = other._type;

	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void		AMateria::use(ICharacter &target)
{
	(void)target;
}

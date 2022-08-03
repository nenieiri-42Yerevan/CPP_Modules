/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:33:51 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/03 18:20:59 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &other) : AMateria(other)
{
}

Ice	&Ice::operator=(const Ice &other)
{
	AMateria::operator=(other);

	return (*this);
}

Ice::~Ice(void)
{
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter *target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

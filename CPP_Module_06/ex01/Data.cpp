/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:52:39 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/09 14:57:17 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	_i = 0;
}

Data::Data(const Data &other)
{
	_i = other._i;
}

Data	&Data::operator=(const Data &other)
{
	if (this != &other)
		_i = other._i;
	return (*this);
}

Data::~Data()
{
}

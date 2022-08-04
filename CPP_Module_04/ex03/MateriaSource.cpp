/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:18:52 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/04 19:50:04 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_size = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	this->_size = other._size;
	for (int i = 0; i < this->_size; ++i)
		this->_materias[i] = other._materias[i]->clone();
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < this->_size; ++i)
		delete this->_materias[i];
	this->_size = other._size;
	for (int i = 0; i < this->_size; ++i)
		this->_materias[i] = other._materias[i]->clone();

	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_size; ++i)
		delete this->_materias[i];
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_size < 4)
		this->_materias[(this->_size)++] = materia;
	else
		std::cout << "No space" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_size; ++i)
	{
		if (type == this->_materias[i]->getType())
			return (this->_materias[i]->clone());
	}

	return (NULL);
}

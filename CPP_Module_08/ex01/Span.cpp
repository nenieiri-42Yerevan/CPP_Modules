/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:33:27 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/15 19:29:16 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->_span.reserve(0);
}

Span::Span(unsigned int N)
{
	this->_span.reserve(N);
}

Span::Span(const Span &other)
{
	this->_span.reserve(other._span.capacity());
	this->_span = other._span;
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_span.clear();
		this->_span.reserve(other._span.capacity());
		this->_span = other._span;
	}
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(unsigned int val)
{
	if (this->_span.size() == this->_span.capacity())
		throw std::overflow_error("Span has no more free spaces");
	this->_span.push_back(val);
	std::sort(this->_span.begin(), this->_span.end());
}

int	Span::shortestSpan() const
{
	int	min;

	if (this->_span.size() < 2)
		throw std::logic_error("Not enough numbers stored to provide a span");
	min = this->_span[1] - this->_span[0];
	for (size_t i = 2; i < this->_span.size(); ++i)
	{
		if (min > (this->_span[i] - this->_span[i - 1]))
			min = (this->_span[i] - this->_span[i - 1]);
	}
	return (min);
}

int	Span::longestSpan() const
{
	if (this->_span.size() < 2)
		throw std::logic_error("Not enough numbers stored to provide a span");
	return (this->_span.back() - this->_span.front());
}

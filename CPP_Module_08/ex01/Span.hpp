/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:26:53 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/15 18:15:14 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <stdexcept>

class	Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span	&operator=(const Span &other);
		~Span();
	public:
		void	addNumber(unsigned int val);
		int		shortestSpan() const;
		int		longestSpan() const;

		template<typename It> void	addNumber(It first, It last);
	private:
		std::vector<int>	_span;
};

template<typename It>
void	Span::addNumber(It first, It last)
{
	while (first != last)
	{
		this->addNumber(*first);
		++first;
	}
}

#endif

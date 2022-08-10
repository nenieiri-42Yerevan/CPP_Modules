/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:57:51 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/10 17:24:13 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template	<typename T>
void		swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>
const T		min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template	<typename T>
const T		max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif

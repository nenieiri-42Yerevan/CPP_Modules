/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:25:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/11 12:36:13 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef> 

template	<typename T>
void		iter(T *arr, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; ++i)
		func(arr[i]);
}

#endif

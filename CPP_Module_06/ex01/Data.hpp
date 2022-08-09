/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:51:17 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/09 15:33:19 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class	Data
{
	public:
		Data();
		Data(const Data &other);
		Data	&operator=(const Data &other);
		~Data();
	private:
		int		_i;
};

#endif

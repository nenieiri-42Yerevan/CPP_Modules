/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:08:10 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/20 15:12:12 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		Fixed	&operator=(const Fixed &other);
		~Fixed(void);
	public:
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
	private:
		int					_value;
		static const int	_point = 8;
};

#endif

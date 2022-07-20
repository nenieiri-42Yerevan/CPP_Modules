/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:32:53 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/20 13:23:42 by vismaily         ###   ########.fr       */
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

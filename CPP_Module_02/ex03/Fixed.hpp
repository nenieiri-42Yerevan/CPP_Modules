/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:08:10 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/21 18:32:56 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <exception>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed(void);
	public:
		Fixed				&operator=(const Fixed &other);
		bool				operator>(const Fixed &other) const;
		bool				operator>=(const Fixed &other) const;
		bool				operator<(const Fixed &other) const;
		bool				operator<=(const Fixed &other) const;
		bool				operator==(const Fixed &other) const;
		bool				operator!=(const Fixed &other) const;
		Fixed				operator+(const Fixed &other) const;
		Fixed				operator-(const Fixed &other) const;
		Fixed				operator*(const Fixed &other) const;
		Fixed				operator/(const Fixed &other) const;
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);
	public:
		int					getRawBits(void) const;
		void				setRawBits(const int raw);
		float				toFloat(void) const;
		int					toInt(void) const;
	public:
		static Fixed		&min(Fixed &obj1, Fixed &obj2);
		static const Fixed	&min(const Fixed &obj1, const Fixed &obj2);
		static Fixed		&max(Fixed &obj1, Fixed &obj2);
		static const Fixed	&max(const Fixed &obj1, const Fixed &obj2);
	private:
		int					_value;
		static const int	_point = 8;
};

std::ostream				&operator<<(std::ostream &out, const Fixed &obj);

#endif

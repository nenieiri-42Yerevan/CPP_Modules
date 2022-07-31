/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:56:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 15:07:18 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal &other);
		Animal				&operator=(const Animal &other);
		virtual ~Animal(void);
	public:
		const std::string	&getType(void) const;
		virtual void		makeSound(void) const;
	protected:
		std::string			_type;
};

#endif

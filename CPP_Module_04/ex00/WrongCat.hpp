/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:59:05 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 16:39:48 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &);
		WrongCat	&operator=(const WrongCat &other);
		~WrongCat(void);
	public:
		void		makeSound(void) const;
};

#endif

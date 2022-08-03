/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:56:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/03 13:07:17 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"
# include "MyColors.hpp"

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &other);
		AAnimal				&operator=(const AAnimal &other);
		virtual ~AAnimal(void);
	public:
		const std::string	&getType(void) const;
		virtual void		makeSound(void) const = 0;
	protected:
		std::string			_type;
};

#endif

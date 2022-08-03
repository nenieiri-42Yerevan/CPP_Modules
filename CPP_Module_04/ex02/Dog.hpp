/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:58:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/03 13:09:56 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class	Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		Dog		&operator=(const Dog &other);
		~Dog(void);
	public:
		Brain	*getBrain(void) const;
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif

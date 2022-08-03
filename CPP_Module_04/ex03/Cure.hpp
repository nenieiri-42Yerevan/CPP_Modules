/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:01:44 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/03 18:12:17 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &other);
		Cure	&operator=(const Curei &other);
		~Cure(void);
	public:
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif

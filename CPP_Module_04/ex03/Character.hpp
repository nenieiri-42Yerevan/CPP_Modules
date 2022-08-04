/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:24:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/04 19:57:38 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter
{
	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character &other);
		Character			&operator=(const Character &other);
		~Character(void);
	public:
		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
	private:
		std::string			_name;
		AMateria			*_inventory[4];
		int					_size;
};

#endif

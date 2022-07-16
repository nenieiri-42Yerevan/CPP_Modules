/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:58:01 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/16 19:05:51 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(const std::string &name);
	public:
		void		setWeapon(Weapon &wp);
		void		attack(void) const;
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif

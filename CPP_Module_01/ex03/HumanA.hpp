/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:53:21 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/16 19:09:22 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(const std::string &name, Weapon &wp);
	public:
		void		attack(void) const;
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:18:36 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/23 18:51:27 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other);
		ClapTrap	&operator=(const ClapTrap &other);
		~ClapTrap(void);
	public:
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	private:
		std::string	name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif

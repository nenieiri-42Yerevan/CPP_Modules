/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:01:47 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/28 18:40:21 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &other);
		~DiamondTrap(void);
		DiamondTrap			&operator=(const DiamondTrap &other);
	public:
		using				FragTrap::getHitPoints;
		using				ScavTrap::getEnergyPoints;
		using				FragTrap::getAttackDamage;
		using				ScavTrap::attack;
	public:
		void				whoAmI(void) const;
		const std::string	&getNameDiamond(void) const;
		void				setNameDiamond(const std::string &name);
	private:
		std::string			_name;
		using				FragTrap::_hitPoints;
		using				ScavTrap::_energyPoints;
		using				FragTrap::_attackDamage;
};

#endif

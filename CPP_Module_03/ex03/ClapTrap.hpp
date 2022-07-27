/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:18:36 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/24 14:54:46 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define COLOR_YELLOW_B "\033[1;33m"
# define COLOR_PURPLE_B "\033[1;35m"
# define COLOR_BLUE_B "\033[1;34m"
# define COLOR_GREEN_B "\033[1;32m"
# define COLOR_GREEN "\033[0;32m"
# define COLOR_RED_B "\033[1;31m"
# define COLOR_END "\033[0m"

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);
		ClapTrap			&operator=(const ClapTrap &other);
	public:
		void				attack(const std::string &target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
	public:
		void				setName(const std::string &name);
		void				setHitPoints(unsigned int	hitPoints);
		void				setEnergyPoints(unsigned int energyPoints);
		void				setAttackDamage(unsigned int attackDamage);
		const std::string	&getName(void) const;
		unsigned int		getHitPoints(void) const;
		unsigned int		getEnergyPoints(void) const;
		unsigned int		getAttackDamage(void) const;
	private:
		std::string			_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:49:10 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/25 15:58:47 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &other);
		ScavTrap(const std::string &name);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &other);
	public:
		void		attack(const std::string &target);
		void		guardGate(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:52:03 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/26 13:50:51 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "ClapTrap.hpp"

static void	print_block(ClapTrap &obj)
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "+------ ClapTrap " << obj.getName();
	std::cout << std::setw(17 - obj.getName().length());
	std::cout << std::setfill('-') << std::left << " " << std::setfill(' ');
	std::cout << "+" << std::endl << "| ";
	std::cout << COLOR_GREEN;
	std::cout << "Hitpoints: " << std::setw(20) << std::left << obj.getHitPoints();
	std::cout << COLOR_PURPLE_B;
	std::cout << " |" << std::endl << "| ";
	std::cout << COLOR_GREEN;
	std::cout << "Energy: " << std::setw(23) << std::left << obj.getEnergyPoints();
	std::cout << COLOR_PURPLE_B;
	std::cout << " |" << std::endl << "| ";
	std::cout << COLOR_GREEN;
	std::cout << "Attack Damage: " << std::setw(16) << std::left << obj.getAttackDamage();
	std::cout << COLOR_PURPLE_B;
	std::cout << " |" << std::endl << "+---------------------------------+" << std::endl;
	std::cout << COLOR_END << std::endl;
}

int	main(void)
{
	ClapTrap	Jhon("Jhon");
	ClapTrap	Jhorge("Jhorge");

	Jhon.setAttackDamage(2);
	Jhorge.setAttackDamage(1);

	std::cout << std::endl;
	print_block(Jhon);
	print_block(Jhorge);

	for (int i = 0; i < 3; ++i)
	{
		Jhon.attack(Jhorge.getName());
		Jhorge.takeDamage(Jhon.getAttackDamage());
	}

	Jhorge.beRepaired(50);
	Jhorge.setAttackDamage(7);

	for (int i = 0; i < 10; ++i)
	{
		Jhorge.attack(Jhon.getName());
		Jhon.takeDamage(Jhorge.getAttackDamage());
		if (Jhon.getHitPoints() == 0)
		{
			std::cout << std::endl << COLOR_GREEN_B << "The game is over!!!";
			std::cout << " Jhorge win." << COLOR_END << std::endl << std::endl;
			break ;
		}
	}
	return (0);
}

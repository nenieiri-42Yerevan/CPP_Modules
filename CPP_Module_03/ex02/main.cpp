/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:52:03 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/27 13:26:22 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "FragTrap.hpp"

static void	print_block(FragTrap &obj)
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "+------ FragTrap " << obj.getName();
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
	FragTrap	Jhon("Jhon");
	FragTrap	Jhorge("Jhorge");

	print_block(Jhon);
	print_block(Jhorge);

	Jhon.setAttackDamage(8);
	Jhorge = Jhon;
	print_block(Jhorge);

	Jhorge.setName("Jhorge");

	std::cout << COLOR_GREEN_B << "The game starts!!!" << std::endl << COLOR_END;
	std::cout << std::endl;

	for (int i = 1; i < 30; ++i)
	{
		if ((i % 3) == 0)
		{
			std::cout << std::endl;
			Jhorge.highFivesGuys();
			std::cout << std::endl;
			continue ;
		}
		Jhon.attack("Jhorge");
		Jhorge.takeDamage(Jhon.getAttackDamage());
		if (Jhorge.getHitPoints() == 0)
		{
			std::cout << std::endl << COLOR_GREEN_B << "The game is over!!!";
			std::cout << " Jhon win." << COLOR_END << std::endl << std::endl;
			break ;
		}
	}

	return (0);
}

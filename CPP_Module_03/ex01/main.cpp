/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:52:03 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/25 16:36:00 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "ScavTrap.hpp"

#define COLOR_PURPLE_B "\033[1;35m"
#define COLOR_YELLOW_B "\033[1;33m"
#define COLOR_GREEN_B "\033[1;32m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_END "\033[0m"

static void	print_block(ClapTrap &obj)
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "+------ ScavTrap " << obj.getName();
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
	ScavTrap	Jhon("Jhon");
	ScavTrap	Jhorge("Jhorge");

	print_block(Jhon);
	print_block(Jhorge);

	Jhon.setAttackDamage(22);
	Jhorge = Jhon;
	print_block(Jhorge);

	Jhorge.setName("Jhorge");

	std::cout << COLOR_GREEN_B << "The game starts!!!" << std::endl << COLOR_END;
	std::cout << std::endl;

	for (int i = 0; i < 2; ++i)
	{
		Jhon.attack("Jhorge");
		Jhorge.takeDamage(Jhon.getAttackDamage());
		if (Jhorge.getHitPoints() == 0)
		{
			std::cout << std::endl << COLOR_GREEN_B << "The game is over!!!";
			std::cout << " Jhon win." << COLOR_END << std::endl << std::endl;
			return (0);
		}
	}

	std::cout << std::endl;
	Jhorge.guardGate();
	std::cout << std::endl;

	for (int i = 0; i < 20; ++i)
	{
		Jhorge.attack("Jhon");
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

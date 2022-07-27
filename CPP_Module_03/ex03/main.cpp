/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:52:03 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/27 13:51:50 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "DiamondTrap.hpp"

static void	print_block(DiamondTrap &obj)
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "+------ DiamondTrap " << obj.getNameDiamond();
	std::cout << std::setw(14 - obj.getNameDiamond().length());
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
	DiamondTrap	Jhon("Jhon");
	DiamondTrap	Jhorge("Jhorge");

	print_block(Jhon);
	print_block(Jhorge);

	Jhorge.whoAmI();
	std::cout << std::endl;

	Jhorge.highFivesGuys();
	Jhorge.guardGate();
	std::cout << std::endl;

	Jhon = Jhorge;
	std::cout << std::endl;
	Jhon.setNameDiamond("Jhon");

	return (0);
}

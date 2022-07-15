/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:57:36 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/15 18:39:15 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	*Zombie_1;
	Zombie	*Zombie_2;

	Zombie_1 = newZombie("Zombie 1 (from heap)");
	Zombie_2 = newZombie("Zombie 2 (from heap)");

	Zombie_1->announce();
	Zombie_2->announce();

	randomChump("Zombie 3 (from stack)");
	randomChump("Zombie 4 (from stack");

	delete Zombie_2;
	delete Zombie_1;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:17:53 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/16 11:44:33 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name);

int	main(void)
{
	Zombie	*horde;
	Zombie	zombie_1("A-ta-ta");
	Zombie	*zombie_2 = new Zombie("B-ha-ha");
	int		n;

	n = 42;
	horde = zombieHorde(n, "C-ga-ga");
	zombie_1.announce();
	zombie_2->announce();
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	delete zombie_2;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:59:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/01 16:19:18 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define NUMBER 4

int	main(void)
{
	Animal	*animals[NUMBER];

	for (int i = 0; i < NUMBER; ++i)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < NUMBER; ++i)
		delete animals[i];

	std::cout << std::endl;
	Cat	cat1;
	Cat cat2;
	cat2.getBrain()->setIdea("Barev");
	cat1 = cat2;
	std::cout << std::endl << COLOR_PURPLE_B;
	std::cout << cat1.getBrain()->getIdea(0) << " - from cat 1" << std::endl;
	std::cout << cat2.getBrain()->getIdea(0) << " - from cat 2" << std::endl;
	std::cout << COLOR_END;
	std::cout << std::endl;

	return (0);
}

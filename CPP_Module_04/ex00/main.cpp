/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:59:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/31 15:59:45 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "Animal testing" << std::endl;
	std::cout << std::endl;

	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete j;
	delete i;
	delete meta;

	std::cout << std::endl;
	std::cout << "WrongAnimal testing" << std::endl;
	std::cout << std::endl;

	const WrongAnimal	*MyWrongAnimal = new WrongAnimal();
	const WrongAnimal	*MyWrongCat = new WrongCat();

	std::cout << std::endl;
	std::cout << MyWrongCat->getType() << " " << std::endl;

	std::cout << std::endl;
	MyWrongCat->makeSound();
	MyWrongAnimal->makeSound();

	std::cout << std::endl;
	delete MyWrongCat;
	delete MyWrongAnimal;

	return (0);
}

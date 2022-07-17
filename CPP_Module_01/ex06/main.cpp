/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:43:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/17 18:14:09 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Karen.hpp"

static int	level(char *argv)
{
	std::string	str = argv;

	if (str.compare("debug") == 0)
		return (0);
	else if (str.compare("info") == 0)
		return (1);
	else if (str.compare("warning") == 0)
		return (2);
	else if (str.compare("error") == 0)
		return (3);
	return (4);
}

int	main(int argc, char **argv)
{
	Karen	karen;
	int		command;

	if (argc == 2)
	{
		command = level(argv[1]);
		switch (command)
		{
			case 0:
				karen.complain("debug");
			case 1:
				karen.complain("info");
			case 2:
				karen.complain("warning");
			case 3:
				karen.complain("error");
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}

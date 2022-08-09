/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:54:13 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/09 17:29:22 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	parsing(const std::string &str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Bad arguments" << std::endl;
	else if (parsing(argv[1]) == false)
		std::cout << "Invalid input" << std::endl;
	return (0);
}

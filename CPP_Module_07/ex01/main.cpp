/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:25:45 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/11 12:51:07 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template	<typename T>
void	print_func(T &elem)
{
	std::cout << elem <<  std::endl;
}

void	increment(int &elem)
{
	++elem;
}

void	increment(char &elem)
{
	++elem;
}

int	main()
{
	int		int_arr[] = {0, 1, 2, 3, 10, 300, 4};
	char	char_arr[] = "Nenie Iri";

	iter(int_arr, 7, &print_func);
	std::cout << "-----------" << std::endl;
	iter(int_arr, 7, &increment);
	iter(int_arr, 7, &print_func);

	std::cout << "-----------" << std::endl;
	iter(char_arr, 9, &print_func);
	std::cout << "-----------" << std::endl;
	iter(char_arr, 9, &increment);
	iter(char_arr, 9, &print_func);

	return (0);
}

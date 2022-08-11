/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:25:45 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/11 16:50:08 by vismaily         ###   ########.fr       */
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

class	Awesome
{
	public:
		Awesome(void): _n(42) { return ; }
		int	get(void) const { return this->_n; }
	private:
		int	_n;
};

std::ostream	&operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

template	<typename T>
void	print(T &x)
{
	std::cout << x << std::endl;
	return ;
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

	int		tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	std::cout << "-----------" << std::endl;
	iter(tab, 5, print);
	std::cout << "-----------" << std::endl;
	iter(tab2, 5, print);

	return (0);
}

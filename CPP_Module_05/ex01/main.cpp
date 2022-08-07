/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:02:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/07 15:30:23 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form	f("f1", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form	f("f2", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form	f("f3", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form	f("f4", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exeption: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	{
		Bureaucrat	b1("B-1", 1);
		Form		f("F-5", 150, 150);

		std::cout << f << std::endl;
		b1.signForm(f);
		std::cout << std::endl << f << std::endl;
	}

	{
		Bureaucrat	b2("B-2", 10);
		Form		f("F-6", 1, 1);

		std::cout << f << std::endl;
		b2.signForm(f);
		std::cout << std::endl << f << std::endl;
	}

	return (0);
}

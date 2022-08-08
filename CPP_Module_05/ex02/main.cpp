/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:02:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/08 12:39:31 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	s1("s1");
	RobotomyRequestForm		r1("r1");
	PresidentialPardonForm	p1("p1");

	Bureaucrat				b1("b1", 145);
	Bureaucrat				b2("b2", 137);
	Bureaucrat				b3("b3", 1);

	std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl;

	std::cout << std::endl << s1 << std::endl;

	b3.executeForm(s1);
	b1.signForm(s1);
	b1.executeForm(s1);
	b2.executeForm(s1);
	b3.executeForm(s1);
	std::cout << s1 << std::endl;

	std::cout << std::endl;

	std::cout << r1 << std::endl;
	b2.signForm(r1);
	b3.signForm(r1);
	b3.executeForm(r1);
	b3.executeForm(r1);
	b3.executeForm(r1);

	std::cout << std::endl;

	std::cout << p1 << std::endl;
	b3.signForm(p1);
	b3.executeForm(p1);

	return (0);
}

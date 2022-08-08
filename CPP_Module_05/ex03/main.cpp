/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:02:04 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/08 13:38:35 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Intern	intern;
	Form	*f;

	f = intern.makeForm("shrubbery creation", "28C");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("robotomy request", "28B");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("presidential pardon", "28A");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("undefined", "0U");

	return (0);
}

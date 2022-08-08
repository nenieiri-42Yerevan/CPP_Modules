/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:50:20 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/08 13:33:28 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;

	return (*this);
}

Intern::~Intern()
{
}

Form	*Intern::makePresidentialPardon(const std::string &target) const
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeRobotomyRequest(const std::string &target) const
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makeShrubberyCreation(const std::string &target) const
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	Form	*(Intern::*forms[3])(const std::string &) const;

	forms[0] = &Intern::makePresidentialPardon;
	forms[1] = &Intern::makeRobotomyRequest;
	forms[2] = &Intern::makeShrubberyCreation;

	std::string	fName[3];

	fName[0] = "presidential pardon";
	fName[1] = "robotomy request";
	fName[2] = "shrubbery creation";

	for (int i = 0; i < 3; ++i)
		if (formName == fName[i])
			return ((this->*forms[i])(target));
	std::cout << "Intern was requested an unknown form" << std::endl;

	return (NULL);
}

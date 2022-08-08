/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:50:23 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/08 13:10:29 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		Intern	&operator=(const Intern &other);
		~Intern();
	public:
		Form	*makeForm(const std::string &formName, const std::string &target) const;
	private:
		Form	*makePresidentialPardon(const std::string &target) const;
		Form	*makeRobotomyRequest(const std::string &target) const;
		Form	*makeShrubberyCreation(const std::string &target) const;
};

#endif

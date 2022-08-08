/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:26:00 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/08 12:31:31 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	Form("ShrubberyCreationForm", 145, 137), _target(other._target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	out;
	std::string	fileName = _target + "_shrubbery";

	this->check_executor(executor);

	out.open(fileName);
    out << "      # #### ####               " << std::endl;
    out << "     ### \\/#|### |/####        " << std::endl;
    out << "    ##\\/#/ \\||/##/_/##/_#     " << std::endl;
    out << "  ###  \\/###|/ \\/ # #####     " << std::endl;
    out << " ##_\\_#\\_\\## | #/###_/_####  " << std::endl;
    out << "## #### # \\ #| /  #### ##/##   " << std::endl;
    out << " __#_--###`  |{,###---###-~     " << std::endl;
    out << "          \\ }{                 " << std::endl;
    out << "           }}{                  " << std::endl;
    out << "           }}{                  " << std::endl;
    out << "      ejm  {{}                  " << std::endl;
    out << "     , -=-~{ .-^- _             " << std::endl;
    out << "           `}                   " << std::endl;
    out << "            {                   " << std::endl;
	out.close();
}

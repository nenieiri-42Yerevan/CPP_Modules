/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:46:15 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/07 18:51:05 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45), _target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
	Form("RobotomyRequestForm", 72, 45), _target(other._target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::cout << "* Unbearable drilling noises *" << std::endl;
	std::cout << this->_target << " has been robotomized " << std::endl;
	if (rand() % 2)
		std::cout << "successfully";
	else
		std::cout << "unsuccessfully";
	std::cout << std::endl;
}

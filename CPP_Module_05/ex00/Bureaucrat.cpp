/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:55:27 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/06 17:57:03 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName())
{
	_grade = other.getGrade();
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other.getGrade();

	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increment(void)
{
	if (this->_grade != 1)
		this->_grade -= 1;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrement(void)
{
	if (this->_grade != 150)
		this->_grade += 1;
	else
		throw GradeTooLowException();
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("The grade is higher than the maximum possible grade (1).");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("The grade is lower than the minimum possible grade (150).");
}

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade();

	return (stream);
}

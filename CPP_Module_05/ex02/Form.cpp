/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:27:29 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/08 12:31:47 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name(),
	_signed(false),
	_signedGrade(1),
	_execGrade(1)
{
}

Form::Form(const Form &other) :
	_name(other._name),
	_signedGrade(other._signedGrade),
	_execGrade(other._execGrade)
{
	this->_signed = other._signed;
}

Form::Form(const std::string &name, int signedGrade, int execGrade) :
	_name(name),
	_signedGrade(signedGrade),
	_execGrade(execGrade)
{
	_signed = false;

	if (_signedGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signedGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		this->_signed = other._signed;

	return (*this);
}

Form::~Form(void)
{
}

const std::string	&Form::getName(void) const
{
	return (this->_name);
}

bool	Form::isSigned(void) const
{
	return (this->_signed);
}

int	Form::getSignedGrade(void) const
{
	return (this->_signedGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_signedGrade)
		this->_signed = true;
	else
		throw GradeTooLowException("Bureaucrat is not authorized to sign the form!");
}

void	Form::check_executor(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->_execGrade)
		throw GradeTooLowException("Bureaucrat is not authorized to sign");
	if (!this->_signed)
		throw InvalidFormException();
}

std::ostream	&operator<<(std::ostream &stream, const Form &obj)
{
	stream << "Form: " << obj.getName() << std::endl;
	stream << "Signed: " << (obj.isSigned() ? "True" : "False") << std::endl;
	stream << "GradeToSign: " << obj.getSignedGrade() << std::endl;
	stream << "GradeToExecute: " << obj.getExecGrade() << std::endl;

	return (stream);
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("The grade is higher than the maximum possible grade (1).");
}

Form::GradeTooLowException::GradeTooLowException(void) :
	_msg("The grade is lower than the minimum possible grade (150).")
{
}

Form::GradeTooLowException::GradeTooLowException(const char *msg) :
	_msg(msg)
{
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return (this->_msg);
}

const char	*Form::InvalidFormException::what(void) const throw()
{
	return ("Not signed forms cannot be executed!");
}

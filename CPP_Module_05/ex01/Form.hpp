/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:25:32 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/07 14:17:26 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form(const Form &other);
		Form(const std::string &name, int signedGrade, int execGrade);
		Form				&operator=(const Form &other);
		~Form(void);
	public:
		const std::string	&getName(void) const;
		bool				isSigned(void) const;
		int					getSignedGrade(void) const;
		int					getExecGrade(void) const;
		void				beSigned(const Bureaucrat &b);
	private:
		Form(void);
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signedGrade;
		const int			_execGrade;
	private:
		struct	GradeTooHighException : public std::exception
		{
			virtual const char	*what(void) const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const char *msg);
				virtual const char	*what(void) const throw();
			private:
				const char			*_msg;
		};
};

std::ostream	&operator<<(std::ostream &stream, const Form &obj);

#endif

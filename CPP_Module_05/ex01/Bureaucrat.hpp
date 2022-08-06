/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:55:32 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/06 17:26:55 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class	Bureaucrat
{
	public:
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat			&operator=(const Bureaucrat &other);
		~Bureaucrat(void);
	public:
		const std::string	&getName(void) const;
		int					getGrade(void) const;
		void				increment(void);
		void				decrement(void);
	private:
		const std::string	_name;
		int					_grade;
	private:
		Bureaucrat(void);
	private:
		struct GradeTooHighException : public std::exception
		{
			const char	*what(void) const throw();
		};
		struct GradeTooLowException : public std::exception
		{
			const char	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj);

#endif

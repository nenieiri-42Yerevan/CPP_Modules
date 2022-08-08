/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:47:41 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/07 18:54:04 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(const std::string &target);
		using	Form::operator=;
		~ShrubberyCreationForm();
	public:
		void					execute(const Bureaucrat &executor) const;
	private:
		ShrubberyCreationForm();
	private:
		const std::string		_target;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:38:10 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/11 16:05:25 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:
		void				set_firstname(const std::string &_firstname);
		void				set_lastname(const std::string &_lastname);
		void				set_nickname(const std::string &_nickname);
		void				set_phone(const std::string &_number);
		void				set_secret(const std::string &_secret);
		const std::string	&get_firstname() const;
		const std::string	&get_lastname() const;
		const std::string	&get_nickname() const;
		const std::string	&get_phone() const;
		const std::string	&get_secret() const;
	private:
		std::string			_firstname;
		std::string			_lastname;
		std::string			_nickname;
		std::string			_phone;
		std::string			_secret;
};

#endif

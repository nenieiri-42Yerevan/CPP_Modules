/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:05:07 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/12 19:27:51 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook()	{_size = 0; _insert_index = 0;}
		void		add_contact(std::string fields[5]);
		void		display_phonebook() const;
		void		display_contact(int index) const;
		int	get_size() const;
	private:
		Contact		_contacts[8];
		int			_size;
		int			_insert_index;
};

#endif

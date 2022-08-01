/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:20:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/01 16:11:07 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include "MyColors.hpp"

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain &other);
		Brain				&operator=(const Brain &other);
		~Brain(void);
	public:
		void				setIdea(const std::string &str);
		const std::string	&getIdea(int index) const;
	private:
		int					size;
		std::string			_ideas[100];
};

#endif

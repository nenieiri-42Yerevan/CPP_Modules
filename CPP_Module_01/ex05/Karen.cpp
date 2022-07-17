/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:02:37 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/17 14:33:35 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain(std::string level)
{
	void		(Karen::*func[4])(void);

	func[0] = &Karen::debug;
	func[1] = &Karen::info;
	func[2] = &Karen::warning;
	func[3] = &Karen::error;

	std::string	levels[4];

	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";

	for (int i = 0; i < 4; i++)
		if (level == levels[0])
			(this->*func[i])();
}

void	Karen::debug(void)
{
	std::cout << "\033[1;35mDEBUG: \033[0m";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-" \
				 "pickle-specialketchup burger. I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "\033[1;36mINFO: \033[0m";
	std::cout << "I cannot believe adding extra bacon costs more money. " \
				 "You didn’t put enough bacon in my burger! If you did, " \
				 "I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "\033[1;33mWARNING: \033[0m";
	std::cout << "I think I deserve to have some extra bacon for free. " \
				 "I’ve been coming for years whereas you started working " \
				 "here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "\033[1;31mERROR: \033[0m";
	std::cout << "This is unacceptable! I want to " \
				 "speak to the manager now." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:02:37 by vismaily          #+#    #+#             */
/*   Updated: 2022/10/23 13:08:13 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain(std::string level)
{
	void	(Karen::*func[4])(void);
	bool	levels[4];
	int		i;

	func[0] = &Karen::debug;
	func[1] = &Karen::info;
	func[2] = &Karen::warning;
	func[3] = &Karen::error;

	levels[0] = (level == "debug");
	levels[1] = (level == "info");
	levels[2] = (level == "warning");
	levels[3] = (level == "error");

	i = 0;
	while (levels[i] == 0)
		++i;
	while (i >= 4)
		return ;
    (this->*func[i])();
}

void	Karen::debug(void)
{
	std::cout << "\033[1;35m[ DEBUG ]\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-" \
				 "pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "\033[1;36m[ INFO ]\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "\033[1;33m[ WARNING ]\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << std::endl;
	std::cout << "I’ve been coming for years whereas you started working " \
				 "here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "\033[1;31m[ ERROR ]\033[0m" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

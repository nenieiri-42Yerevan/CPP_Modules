/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:36:07 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/17 18:17:24 by vismaily         ###   ########.fr       */
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
		if (level == levels[i])
			(this->*func[i])();
}

void	Karen::debug(void)
{
	std::cout << "\033[1;35m[ DEBUG ]\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-" \
				 "pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "\033[1;36m[ INFO ]\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "\033[1;33m[ WARNING ]\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working " \
				 "here since last month." << std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "\033[1;31m[ ERROR ]\033[0m" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl << std::endl;
}

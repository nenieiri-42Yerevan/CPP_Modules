/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:39:31 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/11 15:41:45 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

int	main()
{
	Contact	a;
	std::string	t = "barev";

	a.set_firstname("barev");
	std::cout << a.get_firstname() << std::endl;
	return (0);
}

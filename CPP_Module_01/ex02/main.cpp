/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:43:48 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/16 14:46:58 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address from the object: " << &str << std::endl;
	std::cout << "Address from the pointer: " << stringPTR << std::endl;
	std::cout << "Address from the reference: "<< &stringREF << std::endl;

	std::cout << "Value from the object: " << str << std::endl;
	std::cout << "Value from the pointer: " << *stringPTR << std::endl;
	std::cout << "Value from the reference: " << stringREF << std::endl;

	return (0);
}

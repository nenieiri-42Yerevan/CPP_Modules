/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:03:38 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/09 15:40:25 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#include "MyColors.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data		data;
	uintptr_t	raw;

	std::cout << COLOR_BLUE_B;
	std::cout << "Data ptr: " << &data << std::endl;
	std::cout << COLOR_END;

	raw = serialize(&data);
	std::cout << COLOR_PURPLE_B;
	std::cout << "Data ptr converted to uint: " << raw << std::endl;
	std::cout << COLOR_END;

	Data	*data_ptr;
	data_ptr = deserialize(raw);
	std::cout << COLOR_BLUE_B;
	std::cout << "Uint converted back to ptr: " << data_ptr << std::endl;
	std::cout << COLOR_END;

	std::cout << COLOR_YELLOW_B;
	std::cout << "Are they equal?" << std::endl;
	std::cout << COLOR_END;

	if (data_ptr == &data)
		std::cout << COLOR_GREEN_B << "YES" << COLOR_END << std::endl;
	else
		std::cout << COLOR_RED_B << "NO" << COLOR_END << std::endl;

	return (0);
}

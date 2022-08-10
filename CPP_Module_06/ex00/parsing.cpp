/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:21:14 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/10 11:49:40 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <ctype.h>

void print_all(int i, float f, double d, int flag)
{
	if (i >= 0 && i <= 127)
	{
		if (isprint(i) == 0)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	if (flag == 1)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

static bool	parse_char(const std::string &str)
{
	int		i;
	float	f;
	double	d;

	if (str.length() == 1 && isdigit(str[0]) == 0)
	{
		i = static_cast<int>(str[0]);
		f = static_cast<float>(str[0]);
		d = static_cast<double>(str[0]);

		print_all(i, f, d, 0);

		return (true);
	}
	return (false);
}

static bool	parse_int(const std::string &str)
{
	int		my_int;
	int		i;
	float	f;
	double	d;

	for (unsigned int i = 0; i < str.length(); ++i)
	{
		if (i == 0 && (str[0] == '+' || str[0] == '-'))
			continue ;
		else if (isdigit(str[i]) != 0)
			continue ;
		else
			return (false);
	}

	my_int = atoi(&(str[0]));
	i = static_cast<int>(my_int);
	f = static_cast<float>(my_int);
	d = static_cast<double>(my_int);

	print_all(i, f, d, 0);

	return (true);
}

static bool	parse_double(const std::string &str)
{
	double	my_double;
	int		flag = 0;
	int		i;
	float	f;
	double	d;

	for (unsigned int i = 0; i < str.length(); ++i)
	{
		if (str == "nan" || str == "-inf" || str == "+inf")
		{
			flag = 1;
			break ;
		}
		if (i == 0 && (str[0] == '+' || str[0] == '-'))
			continue ;
		else if (isdigit(str[i]) != 0)
			continue ;
		else if (str[i] == '.' && i != 0 && i + 1 < str.length())
			continue ;
		else
			return (false);
	}

	my_double = stod(str);
	i = static_cast<int>(my_double);
	f = static_cast<float>(my_double);
	d = static_cast<double>(my_double);

	print_all(i, f, d, flag);

	return (true);
}

static bool	parse_float(const std::string &str)
{
	double	my_float;
	int		flag = 0;
	int		i;
	float	f;
	double	d;

	for (unsigned int i = 0; i < str.length(); ++i)
	{
		if (str == "nanf" || str == "-inff" || str == "+inff")
		{
			flag = 1;
			break ;
		}
		if (i == 0 && (str[0] == '+' || str[0] == '-'))
			continue ;
		else if (isdigit(str[i]) != 0)
			continue ;
		else if (str[i] == '.' && i != 0 && i + 1 < str.length())
			continue ;
		else if (str[i] == 'f' && i == str.length() - 1)
			continue ;
		else
			return (false);
	}

	my_float = stof(str);
	i = static_cast<int>(my_float);
	f = static_cast<float>(my_float);
	d = static_cast<double>(my_float);

	print_all(i, f, d, flag);

	return (true);
}

bool	parsing(const std::string &str)
{
	if (parse_char(str) == true)
		return (true);
	else if (parse_int(str) == true)
		return (true);
	else if (parse_double(str) == true)
		return (true);
	else if (parse_float(str) == true)
		return (true);
	return (false);
}

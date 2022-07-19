/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:25:29 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/19 12:27:54 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int	check_valid(int argc, char **argv, std::string &file, std::string &str1, std::string &str2)
{
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return (1);
	}
	file = argv[1];
	str1 = argv[2];
	str2 = argv[3];
	if (file.empty() == 1 || str1.empty() == 1)
	{
		std::cerr << "Error: Empty argument." << std::endl;
		return (1);
	}
	return (0);
}

static int	open_streams(std::ifstream &in, std::ofstream &out, std::string &file)
{
	in.open(file);
	out.open(file + ".replace");
	if (!in.is_open() || !out.is_open())
	{
		std::cout << "Failed to either open the given file or create an output file." << std::endl;
		return (1);
	}
	return (0);
}

static std::string my_replace(std::ifstream &in, std::string &str1, std::string &str2)
{
	std::string	replaced_text;
	std::string	line;
	std::size_t pos;
   
	while (getline(in, line))
	{
		pos = line.find(str1);
		while (pos != std::string::npos)
		{
			line.erase(pos, str1.length());
			line.insert(pos, str2);
			pos = line.find(str1, pos + 1);
		}
		replaced_text = replaced_text + line;
		if (!in.eof())
			replaced_text = replaced_text + "\n";
	}
	return (replaced_text);
}

int	main(int argc, char **argv)
{
	std::ifstream	in;
	std::ofstream	out;
	std::string		file;
	std::string		str1;
	std::string		str2;
	std::string		replaced_text;

	if (check_valid(argc, argv, file, str1, str2))
		return (1);
	if (open_streams(in, out, file))
		return (1);
	replaced_text = my_replace(in, str1, str2);
	out << replaced_text;
	in.close();
	out.close();
	return (0);
}

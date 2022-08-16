/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:59:18 by vismaily          #+#    #+#             */
/*   Updated: 2022/08/16 13:39:48 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int	main()
{
	//Tests with int
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl << std::endl;
		
		mstack.pop();

		std::cout << mstack.size() << std::endl << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl;
		std::stack<int>	s(mstack);

		while (!s.empty())
		{
			std::cout << s.top() << std::endl;
			s.pop();
		}
		std::cout << std::endl;

		// list
		std::list<int>	list;

		list.push_back(5);
		list.push_back(17);

		std::cout << list.back() << std::endl << std::endl;
		
		list.pop_back();

		std::cout << list.size() << std::endl << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator	lit = list.begin();
		std::list<int>::iterator	lite = list.end();

		++lit;
		--lit;
		while (lit != lite)
		{
			std::cout << *lit << std::endl;
			++lit;
		}
		std::cout << std::endl;
	}

	//Tests with double
	{
		MutantStack<double>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl << std::endl;
		
		mstack.pop();

		std::cout << mstack.size() << std::endl << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<double>::iterator	it = mstack.begin();
		MutantStack<double>::iterator	ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl;
		std::stack<double>	s(mstack);

		while (!s.empty())
		{
			std::cout << s.top() << std::endl;
			s.pop();
		}
		std::cout << std::endl;

		// list
		std::list<double>	list;

		list.push_back(5);
		list.push_back(17);

		std::cout << list.back() << std::endl << std::endl;
		
		list.pop_back();

		std::cout << list.size() << std::endl << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<double>::iterator	lit = list.begin();
		std::list<double>::iterator	lite = list.end();

		++lit;
		--lit;
		while (lit != lite)
		{
			std::cout << *lit << std::endl;
			++lit;
		}
	}

	return (0);
}

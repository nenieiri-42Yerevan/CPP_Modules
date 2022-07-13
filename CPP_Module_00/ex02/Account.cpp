/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:47:52 by vismaily          #+#    #+#             */
/*   Updated: 2022/07/13 19:18:43 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	(this->_nbAccounts)++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << " index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	std::cout << " index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "closed" << std::endl;
	(this->_nbAccounts)--;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals += 1;
	return (true);
}

void	Account::displayStatus(void) const
{
	std::cout << " index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "deposits:" << this->_amount << ';';
	std::cout << "withdrawals:" << this->_amount << ';' << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << _nbAccounts << ';';
	std::cout << "total:" << _totalAmount << ';';
	std::cout << "deposits:" << _totalNbDeposits << ';';
	std::cout << "withdrawals::" << _totalNbWithdrawals << ';' << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	current_time;
	tm		*my_time;

	time(&current_time);
	my_time = localtime(&current_time);
	std::cout << '[' << my_time->tm_year + 1900;
	if (my_time->tm_mon < 10)
	std::cout << my_time->tm_mon;
}

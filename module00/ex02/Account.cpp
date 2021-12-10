/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:06:11 by mokhames          #+#    #+#             */
/*   Updated: 2021/12/10 19:01:01 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
	
	_accountIndex = _nbAccounts; 
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount+= _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	Cout << RED << "index:" << _accountIndex << ";amount:"<< _amount << ";created" << DEFAULT <<Endl; 
}

Account::~Account()
{
	_displayTimestamp();
	Cout << BLUE << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << DEFAULT << Endl; 
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	print_time(int i)
{
	if (i < 10)
		Cout << "0";
	Cout << i; 
}

void Account::_displayTimestamp(void)
{
	struct tm	*tim;
	const time_t var = time(0);

	tim = localtime(&var);
	
	Cout << "[";
	print_time(tim->tm_year + 1900);
	print_time(tim->tm_mon + 1); print_time(tim->tm_mday);
	Cout << "_";
	print_time(tim->tm_hour);
	print_time(tim->tm_min);
	print_time(tim->tm_sec);
	Cout << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	Cout << GREEN << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << DEFAULT << Endl;
}
void	Account::displayStatus(void) const
{
	//for (int i = 0; i < _nbAccounts; i++)
	//{
		_displayTimestamp();
		Cout << YELLOW << "index:" << _accountIndex << ";total:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << DEFAULT << Endl;
	//}
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	Cout << PURPLE << "index:" << _accountIndex << ";pamount:" << _amount << ";deposits:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << DEFAULT << Endl;
	_amount += deposit;
	_totalAmount+= deposit;
}
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	Cout << WHITE << "index:" << _accountIndex << ";pamount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		Cout << "refused" << Endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	Cout << withdrawal << ";amount:" << _amount << ";nbWithdrawals:" << _nbWithdrawals << DEFAULT << Endl;
	return (true);
}
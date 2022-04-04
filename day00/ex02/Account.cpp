#include "Account.hpp"

# include <iostream>
# include <iomanip>

//# include <time.h>
//# include <ctime>
//# include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )	{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

//	[19920104_091532] index:0;amount:42;created
}

Account::~Account( void )	{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;

//	[20220317_232811] index:0;amount:42;closed
}

void	Account::_displayTimestamp( void )	{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout	<< std::setfill('0') << "["
				<< 1900 + ltm->tm_year
				<< std::setw(2) << 1 + ltm->tm_mon
				<< std::setw(2) << ltm->tm_mday << "_"
				<< std::setw(2) << ltm->tm_hour
				<< std::setw(2) << ltm->tm_min
				<< std::setw(2) << ltm->tm_sec << "] ";

//	[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
}




int		Account::getNbAccounts( void )	{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )	{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )	{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )	{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )	{
	_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}




void	Account::makeDeposit(int deposit)	{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";";

	this->_totalAmount += deposit;
	this->_totalNbDeposits++;

	this->_amount += deposit;
	this->_nbDeposits++;

	std::cout	<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;

//	[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
}

bool	Account::makeWithdrawal(int withdrawal)	{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout	<< "refused" << std::endl;
		return false;
	}

	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::cout	<< withdrawal << ";"
				<< "amount:" << _amount << ";"
				<< "nb_withdrawals:" << _nbWithdrawals << std::endl;

	return true;

//	[19920104_091532] index:0;p_amount:47;withdrawal:refused
//	[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
}

int		Account::checkAmount() const	{
	return this->_amount;
}

void	Account::displayStatus() const	{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;

//	[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
}

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	//[19920104_091532] index:0;amount:42;created
	_displayTimestamp();
	std::cout << "Account created: " << initial_deposit << std::endl;
	_nbAccounts++;
}

Account::~Account(void)
{
	//[19920104_091532] index:0;amount:47;closed
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
}

void Account::makeDeposit(int deposit)
{
	//[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
	std::cout << "Deposit: " << deposit << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	//[19920104_091532] index:0;p_amount:47;withdrawal:refused
	//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	std::cout << "Withdrawal: " << withdrawal << std::endl;
	return false;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
	//[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
	//[19920104_091532] index:1;amount:785;deposits:1;withdrawals:1
}

void Account::_displayTimestamp(void)
{
	//[19920104_091532]
	std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
}

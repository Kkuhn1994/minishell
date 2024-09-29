#include "Account.hpp"
#include <iostream>
#include <sstream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	std::stringstream ss;

	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;

	ss << "index:" << _accountIndex;
	ss << ";amount:" << _amount;
	ss << ";created";

	std::cout << ss.str() << std::endl;
}

Account::~Account()
{
	std::stringstream ss;

	ss << "index:" << _accountIndex;
	ss << ";amount:" << _amount;
	ss << ";closed";

	std::cout << ss.str() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	std::stringstream ss;

	ss << "index:" << _accountIndex;
	ss << ";p_amount:" << _amount;

	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

	ss << ";deposit:" << deposit;
	ss << ";amount:" << _amount;
	ss << ";nb_deposits:" << _nbDeposits;

	std::cout << ss.str() << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	std::stringstream ss;

	ss << "index:" << _accountIndex;
	ss << ";p_amount:" << _amount;
	std::cout << ss.str();
	ss.str("");
	ss.clear();
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;

	ss << ";withdrawal:" << withdrawal;
	ss << ";amount:" << _amount;
	ss << ";nb_deposits:" << _nbWithdrawals;

	std::cout << ss.str() << std::endl;
	return true;
}

void Account::displayStatus(void) const
{
	std::stringstream ss;

	ss << "index:" << _accountIndex;
	ss << ";amount:" << _amount;
	ss << ";deposits:" << _nbDeposits;
	ss << ";withdrawals:" << _nbWithdrawals;

	std::cout << ss.str() << std::endl;
}

void Account::displayAccountsInfos(void)
{
	std::stringstream ss;

	ss << "accounts:" << Account::_nbAccounts;
	ss << ";total:" << Account::_totalAmount;
	ss << ";deposits:" << Account::_totalNbDeposits;
	ss << ";withdrawals:" << Account::_totalNbWithdrawals;

	std::cout << ss.str() << std::endl;
}

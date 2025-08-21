/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onevil_x <onevil_x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:26:44 by onevil_x          #+#    #+#             */
/*   Updated: 2025/08/21 03:07:42 by onevil_x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _totalAmount += this->_amount;
    _nbAccounts++;
    
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created:" << "\n";
}

Account::~Account(void)
{
    _displayTimestamp();

    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << "\n";
}

void	Account::makeDeposit( int deposit )
{
    int p_amount = _amount;

    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
              << ";p_amount:" << p_amount 
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << "\n";
}

void Account::_displayTimestamp()
{
    time_t curr_time = time(NULL);
    tm* locale_t = localtime(&curr_time);
    char buffer[50];
    if (locale_t == NULL)
    {
        std::cout << "[ERROR]";
        return ;
    }
    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", locale_t);
    std::cout << buffer;
}

bool Account::makeWithdrawal(int withdrawal)
{
    int p_amount = _amount;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";pamount:" << p_amount << ";withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused\n";
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";amout:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
    return true;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << "\n";
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:"   << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

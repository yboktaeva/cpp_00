/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:20:07 by yuboktae          #+#    #+#             */
/*   Updated: 2023/10/24 09:40:32 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    
    this->_accountIndex = _nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {

    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void) {
    
    return Account::_nbAccounts;
}

void Account::_displayTimestamp(void) {

    std::time_t rawtime;
    std::tm *timeinfo;
    char buffer[80];
    
    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
    
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
    std::string str(buffer);
    std::cout << str;
}

void Account::displayStatus(void) const {

    Account::_displayTimestamp();
    
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    
    Account::_displayTimestamp();
    
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposits:" << deposit << ";";
    
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {

    Account::_displayTimestamp();
    
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "withdrawal:";

    if (withdrawal > this->_amount) {

        std::cout << "refused" << std::endl;
        return false;
    }

    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount(void) const {

    return this->_amount;
}

void Account::displayAccountsInfos(void) {

    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
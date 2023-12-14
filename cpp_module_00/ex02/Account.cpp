/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:01:44 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/13 23:01:45 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Default Constructor
Account::Account(void) {}

// Parameterized Constructor
Account::Account(int initial_deposit) : 
    _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0) {
        _nbAccounts++; // this is to keep track of the total number of accounts created
        _totalAmount += initial_deposit; // add initial_deposit to the current amount

        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    }

Account::~Account(void) {
    _nbAccounts--;
    _totalAmount -= _amount;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

/* ======================================================================== */

void Account::makeDeposit(int deposit) {
    _totalNbDeposits++;
    _nbDeposits++;
    _totalAmount += deposit;
    _amount += deposit;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount - deposit
              << ";deposits:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (withdrawal > _amount) {
        std::cout << " index:" << _accountIndex
                  << ";p_amount:" << _amount
                  << ";withdrawal:refused"
                  << std::endl;
        return false;
    } else {
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;

        std::cout << " index:" << _accountIndex
                  << ";p_amount:" << _amount + withdrawal
                  << ";withdrawal:" << withdrawal
                  << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals
                  << std::endl;
        return true;
    }
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

/* ======================================================================== */


void Account::_displayTimestamp(void) {
    std::time_t t = std::time(0);
    std::tm* tm = std::localtime(&t);

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tm);
    
    std::cout << buffer;
}


/*
 implementing a basic banking system with an Account class. The key functionalities involve creating, managing, depositing, and withdrawing from bank accounts. Additionally, the project includes a testing file (tests.cpp) to validate the functionalities of your Account class.

_nbAccounts: This variable is used to keep track of the total number of accounts created. It's incremented each time a new Account object is created and decremented when an account is closed (in the destructor).
_totalAmount: This variable represents the total amount of money across all accounts. It gets updated whenever a new account is created or an existing account is modified (e.g., through deposits or withdrawals).
_totalNbDeposits: This variable counts the total number of deposits made across all accounts. It is incremented each time a deposit is made.
_totalNbWithdrawals: Similar to _totalNbDeposits, this variable counts the total number of withdrawals made across all accounts. It is incremented each time a withdrawal is made.

p_amount previous amount

*/

/*
std::cout << "Total number of accounts: " << Account::getNbAccounts() << std::endl;
std::cout << "Total amount across all accounts: " << _totalAmount << std::endl;

before the program will finish the _totalAmount will be 0 ? yes or no
*/
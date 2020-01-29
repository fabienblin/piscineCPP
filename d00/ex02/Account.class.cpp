// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include "Account.class.hpp"

int Account::getNbAccounts(){
    return _nbAccounts;
}

int Account::getTotalAmount(){
    return _totalAmount;
}

int Account::getNbDeposits(){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(){
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{}

Account::Account(int initial_deposit){
    this->_amount = initial_deposit;
}
Account::~Account(){}

void	Account::makeDeposit(int deposit){}
bool	Account::makeWithdrawal(int withdrawal){return false;}
int		Account::checkAmount() const{return 0;}
void	Account::displayStatus() const{}

void	Account::_displayTimestamp(){}
Account::Account(){}
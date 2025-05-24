#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;



// There are 8 accounts in the example, so we initialize _nbAccounts to 8.
Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) 
{
    _displayTimestamp();

    _nbAccounts++;
	_totalAmount += initial_deposit;

    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ){
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}



void	Account::makeDeposit( int deposit ){
    
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex 
            << ";p_amount:" << p_amount
            << ";deposits:" << deposit
            << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal ){
    int p_amount = _amount;
    if(withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << " index:" << _accountIndex
                << ";p_amount:" << p_amount
                << ";withdrawal" << ":refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
            << ";p_amount:" << p_amount
            << ";withdrawal:" << withdrawal
            << ";amount:" << _amount
            << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    
    return true;

}

int		Account::checkAmount( void ) const {
    return _amount;
}

void	Account::displayStatus( void ) const{

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
            << ";amount:" << _amount
            << ";deposits:" << _nbDeposits
            << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
    std::cout << "[19920104_091532]";
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << " index:" << _nbAccounts
            << ";amount:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void ){
    return _nbAccounts;
}

int Account::getTotalAmount( void ){
    return _totalAmount;
}

int Account::getNbDeposits( void ){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}
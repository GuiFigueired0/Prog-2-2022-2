#include <iostream>

#include "savingsAccount.h"

double SavingsAccount::_annualInterestRate = 3.00;

SavingsAccount::SavingsAccount(double savingsBalance)
{
    _savingsBalance = savingsBalance;
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::modifyInterestRate(double a)
{
    _annualInterestRate = a;
}

double SavingsAccount::calculateMonthlyInterest()
{
    double taxa = (_savingsBalance * _annualInterestRate) / 12.00;
    _savingsBalance += taxa;
    return taxa;
}

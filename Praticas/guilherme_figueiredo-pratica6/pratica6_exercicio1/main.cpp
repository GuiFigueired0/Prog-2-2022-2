#include <iostream>
#include "savingsAccount.h"

int main()
{

    SavingsAccount saver1 = SavingsAccount(2000.0);
    SavingsAccount saver2 = SavingsAccount(3000.0);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    SavingsAccount::modifyInterestRate(4.00);

    std::cout << saver1.calculateMonthlyInterest() << std::endl;
    std::cout << saver2.calculateMonthlyInterest() << std::endl;

    return 0;
}
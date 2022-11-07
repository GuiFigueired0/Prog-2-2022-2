class SavingsAccount
{
private:
    double _savingsBalance;
    static double _annualInterestRate;

public:
    SavingsAccount(double);
    ~SavingsAccount();

    double calculateMonthlyInterest();
    static void modifyInterestRate(double);
};

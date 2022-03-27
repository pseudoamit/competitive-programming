#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
    double balance;
    string name;
    void deposite(double amount);
    void withdraw(double amount);
    Account();
};

class Savings_Account : public Account
{
public:
    double int_rate;
    Savings_Account();
    void deposite(double amount);
    void withdraw(double amount);
};

Account::Account() : balance{0}, name{"An_account"}
{
}

void Account::deposite(double amount)
{
    cout << "Account deposite called " << amount << endl;
}

void Account::withdraw(double amount)
{
    cout << "Account withdraw called: " << amount << endl;
}

Savings_Account::Savings_Account() : int_rate{3.0}
{
}

void Savings_Account::deposite(double amount)
{
    cout << "Saving Account deposite called " << amount << endl;
}

void Savings_Account::withdraw(double amount)
{
    cout << "Saving Account withdraw called " << amount << endl;
}

int main()
{

    Account acc{};
    acc.deposite(2000.0);
    acc.withdraw(5000.0);

    cout << endl;

    Account *p_acc{nullptr};
    p_acc->deposite(2000.0);
    p_acc->withdraw(500.0);

    cout << endl;

    Savings_Account sav_acc{};
    sav_acc.deposite(2000.0);
    sav_acc.withdraw(5000.0);

    cout << endl;

    Savings_Account *psav_acc{nullptr};
    psav_acc->deposite(2000.0);
    psav_acc->withdraw(500.0);

    cout << endl;
    return 0;
}
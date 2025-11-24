#include <iostream>
using namespace std;

// Encapsulation
// => encapsulation is wrapping up data
// and member functins in a single unit
// it also implement data hiding using acccess modifiers

// lets implement it
class Bank
{
private:
    int balance;

public:
    Bank(double initialBalance)
    {
        balance = initialBalance;
    }
    void Deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    void WithDraw(double amount)
    {
        if (balance > 0 && amount <= balance)
        {
            balance -= amount;
        }
    }

    void CurrAmount()
    {
        cout << "Your current amount is " << balance << endl;
    }
};
int main()
{
    Bank bankAccount(1000);
    bankAccount.CurrAmount();
    bankAccount.Deposit(2000);
    bankAccount.WithDraw(1000);
    bankAccount.CurrAmount();
    return 0;
}

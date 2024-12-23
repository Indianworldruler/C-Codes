#include <iostream>
using namespace std;

class BankAccount 
{
private:
    double balance;

public:
    BankAccount(double initialBalance) 
    {
        balance = initialBalance;
    }

    void withdraw(double amount) 
    {
        if (amount > balance) 
        {
            throw -1; 
        }
        balance -= amount;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;
    }

    double getBalance() 
    {
        return balance;
    }
};

int main() 
{
    BankAccount account(5000.0); 

    try {
        cout << "Enter withdrawal amount: ";
        double amount;
        cin >> amount;
        account.withdraw(amount);
    } 
    catch (int e) 
    {
        cout << "Exception: Withdrawal amount exceeds balance!" << endl;
    }

    return 0;
}

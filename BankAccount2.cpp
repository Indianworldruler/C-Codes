#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    string name;
    string password;
    double balance;

public:
    BankAccount() 
    {
        name = "";
        password = "";
        balance = 0.0;
    }

    void setDetails(string userName, string userPassword) 
    {
        name = userName;
        password = userPassword;
        balance = 0.0;
    }

    bool login(string userName, string userPassword) 
    {
        return (name == userName && password == userPassword);
    }

    void credit(double amount) 
    {
        balance += amount;
        cout << "₹" << amount << " credited. Current balance: ₹" << balance << endl;
    }

    void debit(double amount) 
    {
        if (amount > balance) 
        {
            cout << "Insufficient balance. Current balance: ₹" << balance << endl;
        } else 
        {
            balance -= amount;
            cout << "₹" << amount << " debited. Current balance: ₹" << balance << endl;
        }
    }

    void display() 
    {
        cout << "Name: " << name << ", Balance: ₹" << balance << endl;
    }
};

int main() 
{
    BankAccount account;

    string name, password;
    cout << "Set up your account" << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> password;
    account.setDetails(name, password);

    cout << "\nLog in to your account" << endl;
    while (true) 
    {
        string loginName, loginPassword;
        cout << "Enter name: ";
        cin >> loginName;
        cout << "Enter password: ";
        cin >> loginPassword;

        if (account.login(loginName, loginPassword)) 
        {
            cout << "Login successful!" << endl;

            bool isLoggedIn = true;
            while (isLoggedIn) {
                cout << "\n1. Credit\n2. Debit\n3. View Account Details\n4. Logout\nEnter choice: ";
                int choice;
                cin >> choice;

                if (choice == 1) 
                {
                    double amount;
                    cout << "Enter amount to credit: ";
                    cin >> amount;
                    account.credit(amount);
                } 
                else if (choice == 2) 
                {
                    double amount;
                    cout << "Enter amount to debit: ";
                    cin >> amount;
                    account.debit(amount);
                } 
                else if (choice == 3) 
                {
                    account.display();
                } 
                else if (choice == 4) 
                {
                    cout << "Logged out successfully!" << endl;
                    isLoggedIn = false; 
                } 
                else 
                {
                    cout << "Invalid choice. Try again." << endl;
                }
            }
            break; 
        } 
        else 
        {
            cout << "Incorrect name or password. Try again." << endl;
        }
    }

    return 0;
}

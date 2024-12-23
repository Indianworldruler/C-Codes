#include <iostream>
#include <string>
using namespace std;

const int MAX_USERS = 100; // Maximum number of users

// Class to handle individual bank account
class BankAccount {
private:
    string name;
    string password;
    double balance;

public:
    // Constructor
    BankAccount() {
        name = "";
        password = "";
        balance = 0.0;
    }

    // Function to set account details
    void setDetails(string userName, string userPassword) {
        name = userName;
        password = userPassword;
        balance = 0.0;
    }

    // Function to check login
    bool login(string userName, string userPassword) {
        return (name == userName && password == userPassword);
    }

    // Function to credit money
    void credit(double amount) {
        balance += amount;
        cout << "₹" << amount << " credited. Current balance: ₹" << balance << endl;
    }

    // Function to debit money
    void debit(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Current balance: ₹" << balance << endl;
        } else {
            balance -= amount;
            cout << "₹" << amount << " debited. Current balance: ₹" << balance << endl;
        }
    }

    // Function to display account details
    void display() {
        cout << "Name: " << name << ", Balance: ₹" << balance << endl;
    }

    // Function to check if account is set
    bool isSet() {
        return !name.empty();
    }
};

// Class to manage multiple accounts
class BankSystem {
private:
    BankAccount accounts[MAX_USERS];
    int userCount;

public:
    // Constructor
    BankSystem() {
        userCount = 0;
    }

    // Function to add a new user
    void addUser() {
        if (userCount >= MAX_USERS) {
            cout << "Maximum user limit reached." << endl;
            return;
        }

        string name, password;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;

        accounts[userCount].setDetails(name, password);
        userCount++;
        cout << "User added successfully!" << endl;
    }

    // Function to log in a user
    void loginUser() {
        string name, password;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;

        for (int i = 0; i < userCount; i++) {
            if (accounts[i].login(name, password)) {
                cout << "Login successful!" << endl;
                manageAccount(accounts[i]);
                return;
            }
        }
        cout << "Incorrect password or user not found." << endl;
    }

    // Function to manage an account after login
    void manageAccount(BankAccount &account) {
        while (true) {
            cout << "\n1. Credit\n2. Debit\n3. Logout\nEnter choice: ";
            int choice;
            cin >> choice;

            if (choice == 1) {
                double amount;
                cout << "Enter amount to credit: ";
                cin >> amount;
                account.credit(amount);
            } else if (choice == 2) {
                double amount;
                cout << "Enter amount to debit: ";
                cin >> amount;
                account.debit(amount);
            } else if (choice == 3) {
                cout << "Logged out successfully!" << endl;
                break;
            } else {
                cout << "Invalid choice. Try again." << endl;
            }
        }
    }

    // Function to view all users
    void viewUsers() {
        cout << "\nExisting users:" << endl;
        for (int i = 0; i < userCount; i++) {
            accounts[i].display();
        }
    }
};

// Main function
int main() {
    BankSystem bankSystem;

    while (true) {
        cout << "\n1. Add User\n2. Login\n3. View All Users\n4. Exit\nEnter choice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            bankSystem.addUser();
        } else if (choice == 2) {
            bankSystem.loginUser();
        } else if (choice == 3) {
            bankSystem.viewUsers();
        } else if (choice == 4) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}

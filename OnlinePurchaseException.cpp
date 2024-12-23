#include<iostream>
#include<string>
using namespace std;

class OnlinePurchase 
{
public:
    void makePurchase(string creditCardNumber, double balance, double amount) 
    {
        if (creditCardNumber.length() != 16) 
        {
            throw "Invalid credit card number!";
        }
        if (balance < amount) 
        {
            throw "Insufficient balance!";
        }
        balance -= amount;
        cout << "Purchase successful! Remaining balance: " << balance << endl;
    }
};

int main() 
{
    OnlinePurchase purchase;
    string creditCardNumber;
    double balance, amount;

    try 
    {
        cout << "Enter credit card number (16 digits): ";
        cin >> creditCardNumber;
        cout << "Enter balance: ";
        cin >> balance;
        cout << "Enter purchase amount: ";
        cin >> amount;

        purchase.makePurchase(creditCardNumber, balance, amount);
    }
    catch (const char* e) 
    {
        if (string(e) == "Invalid credit card number!") 
        {
            cout << "Exception: Invalid credit card number!" << endl;
        }
    }
    catch (const char* e) 
    {
        if (string(e) == "Insufficient balance!") 
        {
            cout << "Exception: Insufficient balance!" << endl;
        }
    }
    catch (...) 
    {
        cout << "Exception: An unknown error occurred!" << endl;
    }

    return 0;
}

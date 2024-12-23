#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    try 
    {
        if (number < 0) 
        {
            throw -1;
        }
        cout << "You entered: " << number << endl;
    } 
    catch (int e) 
    {
        cout << "Exception: Negative number entered!" << endl;
    }

    return 0;
}

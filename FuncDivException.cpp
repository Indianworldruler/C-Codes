#include <iostream>
using namespace std;

int divide(int a, int b) 
{
    if (b == 0) 
    {
        throw -1; 
    }
    return a / b;
}

int main() 
{
    int num1, num2;

    try 
    {
        cout << "Enter numerator: ";
        cin >> num1;
        cout << "Enter denominator: ";
        cin >> num2;

        int result = divide(num1, num2);
        cout << "Result of division: " << result << endl;
    } 
    catch (int e) 
    {
        cout << "Exception: Division by zero is not allowed!" << endl;
    }

    return 0;
}

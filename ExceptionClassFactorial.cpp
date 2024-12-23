#include <iostream>
using namespace std;

class Factorial 
{
public:
    int fact(int number) 
    {
        if (number <= 0) 
        {
            throw -1; 
        }
        int result = 1;
        for (int i = 1; i <= number; i++) 
        {
            result *= i;
        }
        return result;
    }
};

int main() 
{
    Factorial factorial;
    int number;

    try {
        cout << "Enter a number to calculate its factorial: ";
        cin >> number;
        int result = factorial.fact(number);
        cout << "Factorial of " << number << " is: " << result << endl;
    } 
    catch (int e) 
    {
        cout << "Exception: Factorial is not defined for negative numbers or zero!" << endl;
    }

    return 0;
}

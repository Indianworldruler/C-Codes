#include <iostream>
using namespace std;

int calculateFactorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; ++i)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        int result = calculateFactorial(num); 
        cout << "Factorial of " << num << " = " << result << endl;
    }

    return 0;
}

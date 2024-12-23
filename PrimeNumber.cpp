#include <iostream>
using namespace std;

int isPrime(int num)
{
    if (num <= 1) 
        return 0;

    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
            return 0;
    }
    return 1; 
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}

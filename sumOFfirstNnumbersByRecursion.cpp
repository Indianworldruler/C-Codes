#include<iostream>
using namespace std;

int calculateSum(int n) 
{
    if (n <= 0) 
    {
        return 0; 
    }
    return n + calculateSum(n - 1); 
}

int main() 
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Please enter a positive integer." << endl;
    } 
    else 
    {
        int sum = calculateSum(n);
        cout << "The sum of first " << n << " numbers is: " << sum << endl;
    }

    return 0;
}

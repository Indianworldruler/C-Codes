#include <iostream>
using namespace std;

void input(float &principal, float &rate, float &time)
{
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;
}

float calculateSimpleInterest(float principal, float rate, float time)
{
    return (principal * rate * time) / 100;
}

void displayResult(float simpleInterest)
{
    cout << "The simple interest is: " << simpleInterest << endl;
}

int main()
{
    float principal, rate, time;
    input(principal, rate, time);
    float simpleInterest = calculateSimpleInterest(principal, rate, time);
    displayResult(simpleInterest);

    return 0;
}

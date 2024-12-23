#include<iostream>
using namespace std;

int main()
{
    char sign;
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"\n Enter operator (+, -, *, /, %): ";
    cin>>sign;
    cout<<"\n Enter second number: ";
    cin>>num2;
    if (typeid(num1 && num2) != typeid(int))
    {
        cout<<"Enter an integer";
    }
    else if (sign == '/')
    {
        if (num2 == 0)
        {
            cout<<"Number not divisible by zero";
        }
    }
    switch (sign)
    {
        case '+': 
        cout<<"The addition of entered number is: "<<num1+num2;
        break;

        case '-': 
        cout<<"The subtraction of entered numbers is: "<<num1-num2;
        break;

        case '*':
        cout<<"The multiplication of entered numbers is: "<<num1*num2;
        break;

        case '/':
        cout<<"The division of entered numbers is: "<<num1/num2;
        break;

        case '%':
        cout<<"The remainder of division of two entered numbers is"<<num1%num2;
        break;

        default:
        cout<<"Enter the correct operator";
        break;
    }
    return 0;
}
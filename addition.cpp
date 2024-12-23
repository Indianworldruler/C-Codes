#include<iostream>
using namespace std;

void addition(int& a, int& b)
{
    int c = a+b;
    cout<<"Addition is: "<<c<<endl;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    addition(num1, num2);

    return 0;
}
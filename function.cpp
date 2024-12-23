#include <iostream>
using namespace std;

float add(int n1, float n2)
{
    float sum;  
    sum = n1 + n2;
    return sum; 
}

void display(float sum);  

void input(int &num1, float &num2)
{
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
}

int main()
{
    int num1;
    float num2;
    float sum; 
    
    input(num1, num2);  
    sum = add(num1, num2);  
    display(sum);  

    return 0;
}

void display(float sum)
{
    cout << "The sum is: " << sum << endl;
}

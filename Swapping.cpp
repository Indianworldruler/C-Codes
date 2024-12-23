#include<iostream>
using namespace std;

int main() 
{
    cout<<"Swapping using third variable:";
    int a = 10, b = 20, c;
    c = a;
    a = b;
    b = c;
    cout<<"\n Value of a is:"<<a<<endl<<"\t Value of b is:"<<b<<endl;

    //cout<<"swapping using two variables:";
    //a = a - b; 
    //b = a + b;
    //a = b - a; 
    //cout << "\n After swapping: a = " << a << ", b = " << b << endl;

return 0; 
}




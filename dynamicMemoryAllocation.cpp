#include<iostream>
#include<memory>
using namespace std;

int main()
{
    int* ptr;
    ptr = new int;
    *ptr = 10;
    cout<<*ptr<<endl; //value
    cout<<ptr<<endl; //address
    delete ptr;
    cout<<*ptr;

    return 0;
}

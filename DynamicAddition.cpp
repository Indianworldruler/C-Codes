#include<iostream>
using namespace std;

int main()
{
    int* ptr1 = new int;
    int* ptr2 = new int;
    int sum;
    cout<<"Enter first number: "<<endl;
    cin>>*ptr1;
    cout<<"Enter second numer: "<<endl;
    cin>>*ptr2;
    sum = *ptr1 + *ptr2;
    cout<<"Addition of two pointers is: "<<sum;
    delete ptr1, ptr2;

    return 0;
}

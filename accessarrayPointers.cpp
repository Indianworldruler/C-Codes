#include<iostream>
using namespace std;

int main()
{
    int a[3] = {10, 20, 30};
    int *ptr = a;
    cout<<"Access first element: "<<*ptr<<endl;
    cout<<"Access second element: "<<*(ptr+1)<<endl;
    cout<<"Access third element: "<<*(ptr+2)<<endl;

    return 0;
}
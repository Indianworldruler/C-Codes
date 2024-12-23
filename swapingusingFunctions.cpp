#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"\n After swapping in function x: "<<x<<" y: "<<y<<endl;
 }

 int main()
 {
    int x = 1, y = 2;
    cout<<"\n Before swapping:"<<" x: "<<x<<" y: "<<y;
    swap(x, y);
    cout<<"\n After swapping:"<<" x: "<<x<<" y: "<<y;

    return 0;
 }
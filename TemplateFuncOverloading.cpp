#include<iostream>
#include<string>
using namespace std;
template <class T>

void display(int x)
{
    cout<<"Template display: "<<x<<"\n";
}
void display(int x)
{
    cout<<"Explicit display: "<<x<<"\n";
}

int main()
{
    display(100);
    display(12.34);
    display('c');

    return 0;
}
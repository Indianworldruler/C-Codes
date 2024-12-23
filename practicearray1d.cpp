#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter elements of arrays: ";
    cout<<"\n";
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n The original array is: "<<"\n";
    for(int i=0; i<10; i++)
    {
        cout<<"\n";
        cout<<arr[i];
    }
    arr[4] = 200;
    cout<<"\n The modified array is: "<<"\n";
    for(int i=0; i<10; i++)
    {
        cout<<"\n";
        cout<<arr[i];
    }
}
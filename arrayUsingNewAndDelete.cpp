#include<iostream>
using namespace std;

int main()
{
    int *arr, max_num, i;
    cout<<"Enter the total numbers of elements to be entered: ";
    cin>>max_num;
    arr = new int [max_num];
    cout<<"\n Enter the numbers: ";
    for (i=0; i<max_num; i++)
    {
        cout<<"\n Element number "<<i+1<<" is: ";
        cin>>arr[i];
    }

    cout<<"The numbers are: ";
    for (i=0; i<max_num; i++)
    {
        cout<<arr[i]<<"\t";
    }
    delete [ ] arr;
    cout<<"\n The deleted array is: ";
    for (i=0; i<max_num; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}
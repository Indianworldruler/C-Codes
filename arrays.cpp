#include<iostream>
using namespace std;

int main()
{
    int arr[10], indexno;
    char answer[2], positive[] = "yes", negative[] = "no";
    cout<<"\n Enter 10 elements";
    cout<<"\n";
    for (int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Array";
    for (int i=0; i<10; i++)
    {
        cout<<"\n Element at index "<<i<<": "<<arr[i];
    }
    cout<<"Do you want to modify the array (enter yes/no) ?";
    if (strcmp(answer, positive) == 0)
    {
        cout<<"Enter the index number which you want to modify: ";
        cin>>indexno;
    }

    return 0;
}

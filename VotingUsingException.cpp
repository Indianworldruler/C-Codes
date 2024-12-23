#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age: "<<endl;
    cin>>age;
    try
    {
        if (age<18)
        {
            throw 505;
        }
        else
        {
            cout<<"You are eligible for Voting !"<<endl;
        }
    }
    catch(...)
    {
        cout<<"You are not eligible for voting"<<endl;
        cout<<"Your age is: "<<age<<endl;
    }
    
}
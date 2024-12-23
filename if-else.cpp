#include <iostream>
using namespace std;

int main()
{
int age, num;
cout<<"\n Enter a number";
cin>>num;
cout<<"\n Enter your age";
cin>>age;
if(num==0)
{
    cout<<"\n The entered number is zero";
}
else if(num<0)
{
    cout<<"\n The entered number is negative";
}
else
{
    if(num%2==0)
    {
        cout<<"\n The entered number is positive and even";
    }
    else
    {
        cout<<"\n The entered number is positive and odd";
    }

}

//2. Program to check child, Growing adult
if(age<=13)
{
    cout<<"\n Its a child and not eligible for voting";
}
else if(age>13 && age<18)
{
    cout<<"\n Its a growing child but not eligible for voting";
}
else
{
    cout<<"\n Its a adult and is eigible for voting";
}

return 0;
}
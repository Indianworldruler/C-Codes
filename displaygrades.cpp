#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter grade of the student: ";
    cin>>num;
    if(num>=30)
    {
        if(num>=30 && num<=40)
        {
            cout<<"\n The grades are E";
        }
        else if(num>=40 && num<=50)
        {
            cout<<"\n The grades are D";
        }
        else if(num>=50 && num<=60)
        {
            cout<<"\n The grades are C";
        }
        else if(num>=60 && num<=70)
        {
            cout<<"\n The grades are B";
        }
        else if(num>=70 && num<=80)
        {
            cout<<"\n The grades are B+";
        }
        else if(num>=80 && num<=90)
        {
            cout<<"\n The grades are A";
        }
        else
        {
            cout<<"\n The gardes are A+";
        }
    }
    else
    {
        cout<<"\n The student fails!";
    }

}
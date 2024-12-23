#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll_number, marks;

    void setData()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>roll_number;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void printData()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n Roll number: "<<roll_number;
        cout<<"\n Marks: "<<marks;
    }
};

int main()
{
    Student s1;
    s1.setData();
    s1.printData();

    return 0;
}
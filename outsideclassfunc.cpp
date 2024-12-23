#include<iostream>
using namespace std;

class student
{
    public:
    int rno;
    char name[50];
    double fee;
    student();
    void display();
};

student::student()
{
    cout<<"Enter roll number: "<<endl;
    cin>>rno;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter the fee: "<<endl;
    cin>>fee;
}

void student::display()
{
    cout<<"Name is: "<<name<<". \n Roll number is: "<<rno<<". \n Fee is: "<<fee;
}

int main()
{
    student s;
    s.display();

    return 0;
}

#include<iostream>
using namespace std;

class Outside
{
    public:
    int id;
    string name;

    void displayName();

    void displayid() { cout<<"id is: "<<id<<endl; }
};

void Outside::displayName()
{
    cout<<"Name is: "<<name<<endl;
}

int main()
{
    Outside obj1;
    obj1.name = "Parth";
    obj1.id = 1234;
    obj1.displayName();
    obj1.displayid();

    return 0;
}
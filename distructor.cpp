#include<iostream>
using namespace std;

class Employee
{
    public:
    Employee()
    {
        cout<<"\n Constructor invoked";
    }
    ~Employee()
    {
        cout<<"\n Distructor Invoked";
    }
};

int main()
{
    Employee e1;
    Employee e2;
    Employee e3;

    return 0;
}
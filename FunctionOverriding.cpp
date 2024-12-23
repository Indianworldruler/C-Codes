#include<iostream>
using namespace std;

class base
{
    public:
    
    virtual void print() {cout<<"Print base class \n";}

    void show() {cout<<"Show base class \n";}
};

class derived: public base 
{
    public:

    void print() {cout<<"print derived class \n";}

    void show() {cout<<"Show derived class \n";}
};

int main()
{
    base* bptr;
    derived d;
    bptr = &d;

    
    bptr -> print();
    bptr -> show();

    return 0;
}
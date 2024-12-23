#include<iostream>
using namespace std;

//Main base class
class base1
{
    public:

};

//Derived first base class from main base class
class derivedbase1: public base1
{
    public:

};
//Derived second base class from main base class
class derivedbase2: public base1
{
    public:

};






//first Derived class from derived first base class
class derived1forderivedbase1: public derivedbase1
{
    public:

};
//second Derived class from derived first base class
class derived2forderivedbase1: public derivedbase1
{
    public:

};






//first Derived class from derived second base class
class derived1forderivedbase2: public derivedbase2
{
    public: 

};
//second Derived class from derived second base class
class derived2forderivedbase2: public derivedbase2
{
    public:

};

int main()
{
    return 0;
}
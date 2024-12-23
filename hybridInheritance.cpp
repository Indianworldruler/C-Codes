#include<iostream>
using namespace std;

//First main base class
class mainbase1
{
    public:

};
//Second main base class
class mainbase2
{
    public:

};

//Derived class from first main base class and second main base class (Multiple)
class derivedMultiple: public mainbase1, public mainbase2
{
    public: 

};






//Derived base class from First main base class
class derivedBase: public mainbase1
{

};
//First Derived class from Derived base class
class firstDerived: derivedBase
{
    public:

};
//Second Derived class from Derived base class
class secondDerived: public derivedBase
{
    public: 

};

int main()
{
return 0;
}


#include<iostream>
using namespace std;

class complex
{
    public:
    int a, b;

    void getData()
    {
        cout<<"\n Enter the value of complex numbers a, b: ";
        cin>>a>>b;
    }

    complex operator+(complex ob) //overloaded operator function +
    {
        complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return (t);
    }
    complex operator-(complex ob) //overloaded operator function -
    {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }

    void display()
    {
        cout<<"\n";
        cout<<a<<"+"<<b<<"i"<<"\n";
    }
};

int main()
{
    complex obj1, obj2, result, result1;

    obj1.getData();
    obj2.getData();

    result = obj1 + obj2;
    result1 = obj1 - obj2;

    cout<<"\n \n Input Values: \n";

    obj1.display();
    obj2.display();

    cout<<"\n Result:";

    result.display();
    result1.display();

    return 0;
}
#include<iostream>
using namespace std;

class a
{
    public:
    int num1;

    void input1()
    {
        cout<<"\n Enter number one: ";
        cin>>num1;
    }
};
class b: public a
{
    public:
    int num2;

    void input2()
    {
        cout<<"\n Enter second number: ";
        cin>>num2;
    }
};
class c: public b
{
    public: 
    void display()
    {
        cout<<"\n The entered numbers are: "<<num1<<" and "<<num2;
    }
};

int main()
{
    c obj;
    obj.input1();
    obj.input2();
    obj.display();

    return 0;


}
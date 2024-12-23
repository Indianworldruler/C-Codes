#include<iostream>
using namespace std;

class calculation
{
    public:

    void add(int num1, int num2)
    {
        cout<<"Addition of two numbers is: "<<num1+num2<<endl;
    }
    void add(int num1, int num2, int num3)
    {
        cout<<"Addition of three numbers is: "<<num1+num2+num3<<endl;
    }

};

int main()
{
    calculation obj;
    obj.add(10, 5);
    obj.add(5, 5, 5);

    return 0;
}
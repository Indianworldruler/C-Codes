#include<iostream>
using namespace std;

class abc
{
    public:
    int id;

    abc()
    {
        cout<<"Default constructor called !"<<endl;
        id = 1;
    }
    abc(int x)
    {
        cout<<"Parameterized constructor called";
        id = x;
    }
};

int main()
{
    abc obj;
    abc obj2(21);

    return 0;
}


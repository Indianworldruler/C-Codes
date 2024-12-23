#include<iostream>
using namespace std;

class Count
{
    public:
    int value;

    public:
    //Constructor to initialize count to 5
    
    Count() : value(5) {}

    //Overloaded ++ when used as prefix

    void operator ++()
    {
        ++value;
    }
    void display()
    {
        cout<<"Count: "<<value<<endl;
    }
};

int main()
{
    Count c1;
    ++c1;
    c1.display();

    return 0;
}
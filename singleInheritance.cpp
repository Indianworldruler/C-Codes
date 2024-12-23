#include<iostream>
using namespace std;

class vehicle
{
    public:
    int num;
    vehicle()
    {
        cout<<"This is my base class vehicle";
    }
    void get()
    {
        cout<<"\n Enter a number: ";
        cin>>num;
    }
};
class car: public vehicle
{
    public:

    void display()
    {
        cout<<"\n The number from the base class is: "<<num;
    }
};
int main()
{
    car obj;
    obj.get();
    obj.display();

    return 0;
}
#include<iostream>
using namespace std;

class calculate
{
    public: 
    int length, width, height, ar, vol;
    int area()
    {
        return ar = length * width;
    }
    int volume()
    {
        return vol = length * width * height;
    }
    void input()
    {
        cout<<"\n Enter length: "<<endl;
        cin>>length;
        cout<<"\n Enter width: "<<endl;
        cin>>width;
        cout<<"\n Enter height: "<<endl;
        cin>>height;
    }
    void display()
    {
        cout<<"\n The area is: "<<ar<<endl;
        cout<<"\n The volume is: "<<vol<<endl;

    }
};

int main()
{
    calculate c1;
    c1.input();
    c1.area();
    c1.volume();
    c1.display();
}
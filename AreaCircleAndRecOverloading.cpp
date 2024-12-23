#include<iostream>
using namespace std;

class calculation
{
    public:
    void area(double rad)
    {
        cout<<"Area of circle is: "<<3.14*rad*rad<<endl;
    }
    void area(int length, int width)
    {
        cout<<"Area of rectangle is: "<<length*width;
    }
};

int main()
{
    calculation obj;
    obj.area(5);
    obj.area(5, 10);

    return 0;
}
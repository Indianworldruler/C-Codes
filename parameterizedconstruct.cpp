#include<iostream>
using namespace std;

class point 
{
    public:
    int x, y;
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    int getx() { return x; }
    int gety() { return y; }
};

int main()
{ 
    int x, y;
    point p1(10, 15);
    x = p1.getx();
    y = p1.gety();
    cout<<"p1.x = "<<x<<endl;
    cout<<"p2.y = "<<y<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class myClass
{
    public:
    int x;

    private:
    int y;
};
int main()
{
    myClass obj;
    obj.x = 25;
    cout<<"X = "<<obj.x<<endl;
    // obj.y = 50 Error (y is private)

    return 0;
}
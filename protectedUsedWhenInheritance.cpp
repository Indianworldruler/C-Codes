#include<iostream>
using namespace std;

class base
{
    protected:

    void display()
    {
        cout<<"Can be accessed only in derived class and not outside classes like in main";
    }
};

class derived: public  base
{
public:

void getDisplay()
{
    display();
}
};

int main()
{
derived d;
// d.display will give an error as protected member functions cannot be accessed outside the class 
d.getDisplay();
}
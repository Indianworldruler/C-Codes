#include<iostream>
using namespace std;

class person
{
    private:
    string abc = "Hello World!";
    
    public: 

    void display(int age, string name)
    {
        cout<<"My name is: "<<name<<"\n My age is: "<<age<<endl;
        cout<<"Random text: "<<abc;
    }

};

int main()
{
    person p1;
    p1.display(19, "Parth");

    return 0;
}
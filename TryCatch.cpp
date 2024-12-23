#include<iostream>
using namespace  std;

int main()
{
    double numerator, denominator, divide;
    cout<<"Enter a neumerator"<<endl;
    cin>>numerator;
    cout<<"Enter a denominator"<<endl;
    cin>>denominator;
    try
    {
        if (denominator == 0)
        {
            throw 0;
        }
        divide = numerator / denominator;
        cout<<numerator<<" / "<<denominator<<" = "<<divide<<endl;
    }
    catch(int num_exception)
    {
        cout<<"Error: Cannot divide by: "<<num_exception<<endl;
    }
    

}
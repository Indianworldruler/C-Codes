#include<iostream>
using namespace std;

int main()
{
    int var = 5;
    int* point_var = &var;

    cout<<"Var: "<<var<<endl;
    cout<<"Value of variabe var using pointer: "<<*point_var<<endl;

    var = 7;

    cout<<"Var: "<<var<<endl;
    cout<<"Value of variabe var using pointer after changing value: "<<endl;

    return 0;
}
#include<iostream>
using namespace std;

void demonstration_pointer()
{
    int var = 5;
    int* pointer_var = &var;

    cout<<"The variable var contains: "<<var<<endl;
    cout<<"Print the address of the var using ampercent: "<<&var<<endl;
    cout<<"Print the address of the var (variable) to which pointer_var is pointing, using pointer_var pointer: "<<pointer_var<<endl;
    cout<<"Print the value of the var (variable) to which the pointer_var (variable) is pointing to: "<<*pointer_var<<endl;
    //the pointer_var is always pointing to the address and not the variable
}

int main()
{
    demonstration_pointer();
    return 0;
}
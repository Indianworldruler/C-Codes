#include<iostream>
using namespace std;

void test(int x)
{
    try
    {
       if (x > 0)
       {
        throw x;
       }
       else
       {
        throw 'x';
       }
    }
    catch(int x)
    {
        cout<<"Catch an integer and that integer is: \n"<<x<<endl;
    }
    catch(char x)
    {
        cout<<"Catch an character and that character is: \n"<<x<<endl;
    } 
}

int main()
{
    cout<<"Testing multiple catches: \n";
    test(10);
    test(0);

    return 0;
}
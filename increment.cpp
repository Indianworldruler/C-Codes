#include<iostream>
using namespace std;

int main()
{
    int x = 5, y = 10;
    cout<<"X++ is: "<<x++<<endl;
    cout<<"++X is: "<<++x<<endl;
    cout<<"y-- is: "<<y--<<endl;
    cout<<"--y is: "<<--y<<endl;

    //While loop
    int i=0;
    while (i<5)
    {
        cout<<i<<"\n";
        i++;
    }

    //Do-While loop
    do
    {
     cout<<i<<"\n";   
    } 
    while (i<5);
    {
return 0;
    }
    

    return 0;
}



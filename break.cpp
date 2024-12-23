#include<iostream>
using namespace std;

int main()
{
int i=0, n;
for (i=0; i<100; i++)
{
    if (i==10)
    {
        break;
    }
    if (i==4)
    {
        continue;
    }

    cout<<i<<"\n";
}
return 0;
}
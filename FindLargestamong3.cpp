#include<iostream>
using namespace std;

void findGreatest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "First number is the greatest" << endl;
    }
    else if (b > a && b > c)
    {
        cout << "Second number is the greatest" << endl;
    }
    else
    {
        cout << "Third number is the greatest" << endl;
    }
}

void getInput(int &a, int &b, int &c)
{
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
}

int main()
{
    int a, b, c;
    getInput(a, b, c);
    findGreatest(a, b, c);

    return 0;
}

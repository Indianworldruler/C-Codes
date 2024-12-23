#include<iostream>
using namespace std;

template <class T>
bool checkEquality(T a, T b)
{
    return (a == b);
}

int main()
{
    cout << "Is 10 equal to 20? " << (checkEquality(10, 20) ? "Yes" : "No") << endl;
    cout << "Is 10.5 equal to 10.5? " << (checkEquality(10.5, 10.5) ? "Yes" : "No") << endl;
    cout << "Is 'a' equal to 'z'? " << (checkEquality('a', 'z') ? "Yes" : "No") << endl;

    return 0;
}

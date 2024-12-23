#include<iostream>
using namespace std;

template <class T>
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout<< "Max of 10 and 20: " <<findMax(10, 20)<<endl;
    cout<< "Max of 10.5 and 20.7: "<<findMax(10.5, 20.7)<<endl;
    cout<< "Max of 'a' and 'z': "<<findMax('a', 'z');

    return 0;
}

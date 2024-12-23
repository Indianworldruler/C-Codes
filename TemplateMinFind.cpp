#include<iostream>
using namespace std;

template <class T>
T findMin(T a, T b)
{
    return (a < b) ? a : b;
}

int main()
{
    cout<< "Min of 10 and 20: "<<findMin(10, 20) << endl;
    cout<< "Min of 10.5 and 20.7: "<<findMin(10.5, 20.7) << endl;
    cout<< "Min of 'a' and 'z': "<<findMin('a', 'z');

    return 0;
}

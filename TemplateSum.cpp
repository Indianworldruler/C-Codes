#include<iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum of 10 and 20: " << sum(10, 20) << endl;
    cout << "Sum of 10.5 and 20.7: " << sum(10.5, 20.7) << endl;
    cout << "Sum of 'a' and 'b': " << sum('a', 'b') << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Addition 
{

public:
int num1, num2, result;

    void read() 
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void sum() 
    {
        result = num1 + num2;
    }

    void print() 
    {
        cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
    }
};

int main() {
    Addition obj1, obj2;

    cout << "For object 1:" << endl;
    obj1.read();   
    obj1.sum();    
    obj1.print();  

    cout << "\nFor object 2:" << endl;
    obj2.read();   
    obj2.sum();    
    obj2.print();  

    return 0;
}

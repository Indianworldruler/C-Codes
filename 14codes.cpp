#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Display a Single Variable
    int singleVar = 10;
    cout << "Single Variable: " << singleVar << "\n";

    // 2. Swap Two Variables
    int a = 5, b = 10, temp;
    cout << "Before Swap: a = " << a << ", b = " << b << "\n";
    temp = a;
    a = b;
    b = temp;
    cout << "After Swap: a = " << a << ", b = " << b << "\n";

    // 3. Simple Arithmetic Operations
    int x = 15, y = 5;
    cout << "Addition: " << x + y << "\n";
    cout << "Subtraction: " << x - y << "\n";

    // 4. Find the Sum of Multiple Variables
    int num1 = 10, num2 = 20, num3 = 30;
    cout << "Sum of Multiple Variables: " << num1 + num2 + num3 << "\n";

    // 5. Store and Display Different Data Types
    float floatVar = 5.99;
    char charVar = 'A';
    bool boolVar = true;
    string stringVar = "Hello, World!";
    cout << "Float: " << floatVar << "\n";
    cout << "Char: " << charVar << "\n";
    cout << "Boolean: " << boolVar << "\n";
    cout << "String: " << stringVar << "\n";

    // 6. Convert Celsius to Fahrenheit
    float celsius = 37;
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Celsius: " << celsius << " -> Fahrenheit: " << fahrenheit << "\n";

    // 7. Sum of Two Variables
    int sum1 = 25, sum2 = 35;
    cout << "Sum of Two Variables: " << sum1 + sum2 << "\n";

    // 8. Store and Display a String Variable
    string greeting = "Welcome to C++ programming!";
    cout << "String Variable: " << greeting << "\n";

    // 9. Simple Interest Calculation
    float principal = 1000, rate = 5, time = 2;
    float simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simpleInterest << "\n";

    // 10. Find the Remainder Using Modulus
    int dividend = 25, divisor = 4;
    cout << "Remainder: " << dividend % divisor << "\n";

    // 11. Perimeter of a Rectangle
    int length = 5, breadth = 10;
    int perimeter = 2 * (length + breadth);
    cout << "Perimeter of Rectangle: " << perimeter << "\n";

    // 12. Division of Two Numbers
    float numA = 20, numB = 4;
    cout << "Division Result: " << numA / numB << "\n";

    // 13. Assign Values to Multiple Variables
    int var1 = 1, var2 = 2, var3 = 3;
    cout << "var1: " << var1 << ", var2: " << var2 << ", var3: " << var3 << "\n";

    // 14. Check If a Variable is Positive or Negative
    int number = -10;
    if (number > 0)
        cout << "The variable is Positive.\n";
    else if (number < 0)
        cout << "The variable is Negative.\n";
    else
        cout << "The variable is Zero.\n";

    return 0;
}

#include<iostream>
#include<string>
using namespace std;

class Rectangle 
{
    private:
        int length, width;

    public:
        void setDimensions(int l, int w) 
        {
            length = l;
            width = w;
        }
        int area() 
        { 
            return length * width; 
        }
};

class Student 
{
    private:
        string name;
        int age;

    public:
        Student(string n, int a) : name(n), age(a) {}
        Student(const Student &s) : name(s.name), age(s.age) {}
        void display() 
        {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

class Calculation 
{
    public:
        void calculate(int n) 
        {
            int evenSum = 0, oddProduct = 1;
            for (int i = 1; i <= n; i++) 
            {
                if (i % 2 == 0) 
                {
                    evenSum += i;
                } 
                else 
                {
                    oddProduct *= i;
                }
            }
            cout << "Sum of even numbers: " << evenSum << endl;
            cout << "Product of odd numbers: " << oddProduct << endl;
        }

        int add(int a, int b) 
        {
            return a + b;
        }

        int max(int a, int b) 
        {
            return (a > b) ? a : b;
        }

        double max(double a, double b) 
        {
            return (a > b) ? a : b;
        }

        int factorial(int n) 
        {
            if (n <= 1) 
                return 1;
            else 
                return n * factorial(n - 1);
        }

        int findLargest(int arr[], int size) 
        {
            int largest = arr[0];
            for (int i = 1; i < size; i++) 
            {
                if (arr[i] > largest)
                    largest = arr[i];
            }
            return largest;
        }

        int findSmallest(int arr[], int size) 
        {
            int smallest = arr[0];
            for (int i = 1; i < size; i++) 
            {
                if (arr[i] < smallest)
                    smallest = arr[i];
            }
            return smallest;
        }

        void reverseArray(int arr[], int size) 
        {
            for (int i = 0; i < size / 2; i++) 
            {
                int temp = arr[i];
                arr[i] = arr[size - i - 1];
                arr[size - i - 1] = temp;
            }
        }

        void calculateSum(int arr[], int size) 
        {
            int sum = 0;
            for (int i = 0; i < size; i++) 
            {
                sum += arr[i];
            }
            cout << "Sum of array elements: " << sum << endl;
        }

        void reverseString(string &str) 
        {
            int n = str.length();
            for (int i = 0; i < n / 2; i++) 
            {
                swap(str[i], str[n - i - 1]);
            }
        }

        string concatenateStrings(string str1, string str2) 
        {
            return str1 + str2;
        }

        int stringLength(string str) 
        {
            return str.length();
        }
};

int main() 
{
    int n, length, width, a, b, arr[10], arr5[5], arr6[6], evenCount = 0, oddCount = 0;
    string name, str1, str2;
    int age;

    // Problem: Sum of even numbers and product of odd numbers between 1 and n
    cout << "Enter the value of n: ";
    cin >> n;
    Calculation calc;
    calc.calculate(n);

    // Problem: Calculate the area of the rectangle with given length and width
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rect;
    rect.setDimensions(length, width);
    cout << "Area of rectangle: " << rect.area() << endl;

    // Problem: Display the details of a student with name and age
    cout << "Enter name and age of the student: ";
    cin >> name >> age;
    Student student1(name, age);
    Student student2 = student1;
    cout << "Details of student 1:" << endl;
    student1.display();
    cout << "Details of student 2 (copy):" << endl;
    student2.display();

    // Problem: Add two integers and display the sum
    cout << "Enter two integers to add: ";
    cin >> a >> b;
    int sum = calc.add(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    // Problem: Find the larger of two integers
    cout << "Enter two integers to find the larger: ";
    cin >> a >> b;
    cout << "Larger integer: " << calc.max(a, b) << endl;

    // Problem: Find the larger of two double values
    double x, y;
    cout << "Enter two double values to find the larger: ";
    cin >> x >> y;
    cout << "Larger double value: " << calc.max(x, y) << endl;

    // Problem: Compute the factorial of a number
    cout << "Enter a positive integer to find its factorial: ";
    cin >> n;
    int fact = calc.factorial(n);
    cout << "The factorial of " << n << " is: " << fact << endl;

    // Problem: Find the largest number in an array
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> arr5[i];
    }
    int largest = calc.findLargest(arr5, 5);
    cout << "The largest number in the array is: " << largest << endl;

    // Problem: Find the smallest number in an array
    int smallest = calc.findSmallest(arr5, 5);
    cout << "The smallest number in the array is: " << smallest << endl;

    // Problem: Initialize an array with the first 10 natural numbers and print them
    cout << "First 10 natural numbers: ";
    for (int i = 0; i < 10; i++) 
    {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    // Problem: Reverse the elements of an array
    cout << "Enter 5 integers to reverse: ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> arr5[i];
    }
    calc.reverseArray(arr5, 5);
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << arr5[i] << " ";
    }
    cout << endl;

    // Problem: Take 6 integers as input and store them in an array
    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; i++) 
    {
        cin >> arr6[i];
    }

    // Problem: Count how many numbers are even and how many are odd in an array
    for (int i = 0; i < 8; i++) 
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) 
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }

    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    // Problem: Reverse a string
    cout << "Enter a string to reverse: ";
    cin >> str1;
    calc.reverseString(str1);
    cout << "Reversed string: " << str1 << endl;

    // Problem: Concatenate two strings
    cout << "Enter two strings to concatenate: ";
    cin >> str1 >> str2;
    cout << "Concatenated string: " << calc.concatenateStrings(str1, str2) << endl;

    // Problem: Calculate string length
    cout << "Enter a string to calculate its length: ";
    cin >> str1;
    cout << "Length of the string: " << calc.stringLength(str1) << endl;

    return 0;
}

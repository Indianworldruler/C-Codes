#include <iostream>
#include <cmath>
using namespace std;

class Maths 
{
public:
    int num;

    void input() 
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    int factorial() 
    {
        int fact = 1;
        for (int i = 1; i <= num; i++) 
        {
            fact *= i;
        }
        return fact;
    }

    int fibonacci() 
    {
        int a = 0, b = 1;
        if (num == 0) 
        {
            return a;
        } 
        else if (num == 1) 
        {
            return b;
        } 
        else 
        {
            for (int i = 2; i <= num; i++) 
            {
                int next = a + b;
                a = b;
                b = next;
            }
            return b;
        }
    }

    bool isArmstrong() 
    {
        int sum = 0, temp = num, digits = 0;
        while (temp != 0) 
        {
            temp /= 10;
            digits++;
        }
        temp = num;
        while (temp != 0) 
        {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        return sum == num;
    }

    bool isPrime() 
    {
        if (num <= 1) return false;
        for (int i = 2; i <= sqrt(num); i++) 
        {
            if (num % i == 0) return false;
        }
        return true;
    }

    bool isPalindrome() 
    {
        int reversed = 0, original = num, remainder;
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        return (original == reversed);
    }

    void display() {
        cout << "Number: " << num << endl;
        cout << "Factorial: " << factorial() << endl;
        cout << "Fibonacci: " << fibonacci() << endl;
        cout << "Armstrong Number: " << (isArmstrong() ? "Yes" : "No") << endl;
        cout << "Prime Number: " << (isPrime() ? "Prime" : "Not Prime") << endl;
        cout << "Palindrome: " << (isPalindrome() ? "Yes" : "No") << endl;
    }
};

int main() 
{
    Maths obj;
    obj.input();  
    obj.display();  

    return 0;
}

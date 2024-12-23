#include <iostream>
#include <string>
using namespace std;

void getInput(string &input)
{
    cout << "Enter a string of numbers: ";
    cin >> input;
}

string reverseString(const string &input)
{
    return string(input.rbegin(), input.rend());
}

void displayResult(const string &reversed)
{
    cout << "Reversed string: " << reversed << endl;
}

int main()
{
    string input;
    getInput(input);
    string reversed = reverseString(input);
    displayResult(reversed);

    return 0;
}

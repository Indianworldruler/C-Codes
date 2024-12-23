#include <iostream>
#include <string>
using namespace std;

// Template function to check voting eligibility
template <typename T>
void checkEligibility(T age) {
    try {
        if (age < 0) {
            throw string("Age cannot be negative.");
        }
        if (age >= 18) {
            cout << "You are eligible to vote." << endl;
        } else {
            throw age;
        }
    } catch (int invalidAge) {
        cout << "You are not eligible to vote. Age: " << invalidAge << endl;
    } catch (string &error) {
        cout << "Error: " << error << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    checkEligibility(age);

    return 0;
}

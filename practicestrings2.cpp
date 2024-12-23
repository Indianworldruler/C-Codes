#include <iostream>
#include <string>  
using namespace std;

int main() 
{
    string str1;
    cout << "Enter a string: ";
    getline(cin, str1);  

    int length = str1.length();
    cout << "Length of the string: " << length << endl;

    string str2 = str1;
    cout << "Copied string (str2): " << str2 << endl;

    return 0;
}

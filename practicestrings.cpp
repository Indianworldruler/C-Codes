#include <iostream>
#include <cstring>  
using namespace std; 

int main() 
{
    char str[50] = "Welcome to C++ program";
    int length = strlen(str);
    cout << "Total length of the string: " << length << endl;

    char welcome[10];
    strncpy(welcome, str, 7); 
    welcome[7] = '\0';  
    cout << "Extracted word: " << welcome << endl;

    strcat(str, " Btech");  
    cout << "Updated string: " << str << endl;

    return 0;
}

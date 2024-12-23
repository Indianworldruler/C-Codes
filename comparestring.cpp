#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "apple";
    string str2 = "banana";
    if (str1 == str2)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"The strings are not equal"<<endl;
    }
    int result = str1.compare(str2);
    if (result == 0)
    {
        cout<<"Strings are equal";
    }
    else if (result < 0)
    {
        cout<<"str1 comes before str2";
    }
    else
    {
        cout<<"str1 come after str2";
    }

    //substrings
    
}
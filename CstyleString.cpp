#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[100];
    int len;
    string greeting = "Hello";
    cout<<"Enter a string: "<<"\n";
    cin>>str3;
    cout<<"You entered: "<<str3<<endl;
    cout<<str1<<"\n";
    cout<<str2;

    //String user input
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"You entered: "<<str<<endl;
    return 0;
    
    //Copy str1 into str3
    strcpy(str3, str1);
    cout<<"strcpy(str3, str1): "<<str3<<endl;

    //Concatinations str1 and str2
    strcat(str1, str2);
    cout<<"strcat(str1, str2): "<<str1<<endl;

    //total len of string one after concatination
    len  = strlen(str1);
    cout<<"strlen(str1): "<<len<<endl;

    //Take any string
    string s1 = "Anushree";
    //copy two characters of s1 (starting from index 3)
    string r = s1.substr(3, 2);
    //Prints the result
    cout<<"String is: "<<r;

    //Creating and initializing strings
    int name;

    string greeting = "Hello World";
    cout<<greeting<<endl;
    cout<<"Enter your name";
    cin>>name;
    int length = greeting.length();
    cout<<length<<endl;


    //Appending and concatonating strings
    string firstname = "hello";
    string secondname = "how are you";
    string fullname = firstname + " " + secondname;
    cout<<fullname<<endl;
    string base = "heyoo";
    cout<<base<<endl;
    base.append("Whatsapp");
    cout<<base<<endl;
    return 0; 
}
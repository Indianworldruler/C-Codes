#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    // Create a txt file
    // Naming the file "abc.txt"
    fstream my_file("abc.txt", ios::out);

    // Error Checking
    if (!my_file) 
    {
        cout << "Error creating file." << endl;
        return 1;
    }
    cout << "File created successfully." << endl;

    // Writing to a file
    my_file << "This is the first line in the file." << endl;
    my_file.close();

    // Read from a file
    my_file.open("abc.txt", ios::in);
    if (!my_file) 
    {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "Reading content from the file:" << endl;
    char line[256];
    while (my_file.getline(line, 256)) 
    {
        cout << line << endl;
    }
    my_file.close();

    // Append to a file
    my_file.open("abc.txt", ios::app);
    if (!my_file) 
    {
        cout << "Error opening file for appending." << endl;
        return 1;
    }

    my_file << "This line is appended to the file." << endl;
    my_file.close();

    cout << "Appended content successfully." << endl;

    return 0;
}

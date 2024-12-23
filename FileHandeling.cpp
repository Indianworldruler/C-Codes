#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Opening a text file for writing 
    ifstream my_file("abc.txt");

    if(!my_file)
    {
        cout<<"Error opening the file"<<endl;
        return 1;
    }
    
    // Store the contents of the file in "Line" string
    string line;

    //Loop untill the end of the text file
    while (!my_file.eof())
    {
        //Store the current line of the file
        //in the "line" variable
        getline(my_file, line);

        // Print the line variable
        cout<<line<<endl;
    }

    my_file.close();

    return 0;
}
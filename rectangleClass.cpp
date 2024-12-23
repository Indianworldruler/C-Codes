#include <iostream>
using namespace std;

class Rectangle 
{

public:
float length, width;

    void setDimensions(float l, float w) 
    {
        length = l;
        width = w;
    }

    float calculateArea() 
    {
        return length * width;
    }

    void displayDimensions() 
    {
        cout << "Length: " << length << " meters" << endl;
        cout << "Width: " << width << " meters" << endl;
    }
};

int main() {
    Rectangle rect;
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);

    cout << "\nThe dimensions of the rectangle are:" << endl;
    rect.displayDimensions();

    float area = rect.calculateArea();
    cout << "\nThe area of the rectangle is: " << area << " square meters." << endl;

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    float base = 10, height = 20, length = 15, width = 12, side = 5, radius = 10, triangle_area, rectangle_area, square_area, circle_area;
    triangle_area = 0.5 * base * height;
    rectangle_area = length * width;
    square_area = side * side;
    circle_area = 3.14 * radius * radius;
    cout<<"Area of triangle is: "<<triangle_area<<endl;
    cout<<"Area of rectangle is: "<<rectangle_area<<endl;
    cout<<"Area of square is: "<<square_area<<endl;
    cout<<"Area of circle is: "<<circle_area<<endl;

    return 0;
}
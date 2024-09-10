/*11. Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading 

Rectangle: Area * 
breadth Triangle: ½ 
*Area* breadth Circle: 
Pi * Area *Area 
*/


#include <iostream>
using namespace std;


float calculateArea(float length, float breadth) 
{
    return length * breadth;
}


float calculateArea(float base, float height, char triangle) 
{
    return 0.5 * base * height;
}


float calculateArea(float radius) 
{
    const float PI = 3.14159;
    return PI * radius * radius;
}

main() 
{
    float length, breadth, base, height, radius;


    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << calculateArea(length, breadth) << endl;


    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << calculateArea(base, height, 'T') << endl;


    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << calculateArea(radius) << endl;


}



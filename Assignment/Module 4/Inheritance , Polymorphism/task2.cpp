//2. Write a C++ Program to find Area of Rectangle using inheritance 

#include <iostream>
using namespace std;

class A{ 		// class A 
protected:
    int length; 		// integer length 
    int width;			// integer width

public:
    
    set(double l, double w)  
	{
        length = l;
        width = w;
    }
};


class B: public A{ 		// class b derived public a
public:
    
    double ca() 
	{
        return length * width;		// claculate length * width
    }
};

main() 
{
    B obj;

    double l, w;
    cout << "Enter the length of the rectangle: ";		// enter value length of rectangle
    cin >> l;
    cout << "Enter the width of the rectangle: ";      // enter value width rectangle
    cin >> w;
    
    obj.set(l, w);

    
    cout << "Area of the rectangle: " <<obj.ca()<<endl;  // area of the rectangle 
}


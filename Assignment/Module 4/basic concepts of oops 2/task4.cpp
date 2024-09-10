/*4. Write a C++ program to implement a class called Circle that has private 
      member variables for radius. Include member functions to calculate the 
       circle's area and circumference.*/
   
#include <iostream>
using namespace std;

class Circle{			// class circle
private:				// private 
    int radius;				// radius

public:
    	setRadius(int r)   	// set radius
			{
        		radius = r; 	// radius equal r 
    		}

    
    	int ca()       // calculate area 
			{
        		return 3.14159 * radius * radius;  // formula 
    		}

    	
    	int cc()  		// calculate circumference
			{
        		return 2 * 3.14159 * radius; // formula 
    		}
};

main() 		// main file
{
    Circle c;  				// circle object c

    int r;
    
    cout << "Enter the radius of the circle: ";			// enter radius of the circle
    cin >> r; 									// store in r

    c.setRadius(r);			//  call function set radius 

    cout << "Area of the circle: " << c.ca() << endl;		// cout msg and with call function calculate area
    cout << "Circumference of the circle: " << c.cc() << endl; //cout msg and with call fun calculate circumference
}


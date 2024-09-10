/*5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter. */

#include<iostream>
using namespace std;

class Rectangle{ 				// class of rectangle 
	private:				// private 
		double length; 		// length
		double width;		// width
		
	public:							// public
		
		s(double l, double w)     // short l and w 
		{
        	length = l;			// length equal l
        	width = w;				// width equal w
    	}
		
		double ca()			// calculate area of rectangle
		{
			return length*width;			// length multiply by width
		}	
		
		double cp()			// calculate perimeter of rectangle 
		{
			return 2*(length+width);		// formula 2 multiply by length + width
		}
};

main()
{
	Rectangle obj;			// rectangle object obj
	
	double l,w;
	
	cout<<"Enter The Length of rectengle : ";	// enter length rectangle 
	cin>>l;
	cout<<"Enter The width of rectengle : ";	// enter width rectangle 
	cin>>w;
	
	obj.s(l, w);
	
	cout<<"Area of the rectangle is : "<<obj.ca()<<endl; // area of rectangle with function ca
	cout<<"perimeter of the rectangle is : "<<obj.cp()<<endl; // perimeter rectangle with function cp
}

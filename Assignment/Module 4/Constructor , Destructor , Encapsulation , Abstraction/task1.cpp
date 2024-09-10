//1. Write a program to find the multiplication values and the cubic values using inline function



#include <iostream>
using namespace std;


inline int multiply(int a, int b) 		// inline int multiply 
{
    return a * b;
}


inline int cube(int a)   			// inline int cube 
{
    return a * a * a;
}

main() 
{
    int num1,num2;						// integer num1 and num2 


    cout<<"Enter numbers: ";			// enter number 1
    cin>>num1;
	
	cout<<"Enter numbers: ";			// enter number 2 
	cin>>num2;


    cout << "Multiplication : " <<multiply(num1, num2)<<endl;		// multiply num1 and num2 

    
    cout<<"Cube of "<<cube(num1) << endl;			// cube 1 

    
    cout<<"Cube of "<<cube(num2) << endl;		// cube 2 

}


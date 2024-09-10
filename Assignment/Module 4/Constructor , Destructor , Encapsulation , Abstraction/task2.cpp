//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;


class A{					// class create
	public:			// public access
		int a,b;		// for a and b 
		
		A()			// same name as class name 
		{
			cout<<"Addition"<<endl;				// addition 
			cout<<"Enter Number A : ";		// enter number a 
			cin>>a;
			cout<<"Enter Number B : ";			// enter number b 
			cin>>b;
			
			cout<<"Addition is : "<<a+b<<endl<<endl;				// total addition 
			
					
			cout<<"Subtraction"<<endl;		// subtraction
			cout<<"Enter Number A : ";			// number a 
			cin>>a;
			cout<<"Enter Number B : ";		// number b 
			cin>>b;
			
			cout<<"Subtraction is : "<<a-b<<endl<<endl;		// total subtraction
		
		
			cout<<"Multiplication"<<endl;		// multiplication
			cout<<"Enter Number A : ";	// number a 
			cin>>a;
			cout<<"Enter Number B : ";			// number 2 
			cin>>b;
			
			cout<<"Multiplication is : "<<a*b<<endl<<endl;		// total multiplication 
			
			
			cout<<"Division"<<endl;		// division 
			cout<<"Enter Number A : ";			// enter number a 
			cin>>a;
			cout<<"Enter Number B : ";		// enter number b 
			cin>>b;
			
			cout<<"Division is : "<<a/b<<endl<<endl;		// total division 

		}
		

};


main()
{
	A obj; // call class name and obj that's it 
}

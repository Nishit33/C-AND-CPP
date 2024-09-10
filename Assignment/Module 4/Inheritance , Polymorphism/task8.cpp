/*8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

#include<iostream>
using namespace std;

class A{		// class A
	public:
		add(int a,int b)		// parameter Addition 
		{
			cout<<"Enter Number 1 : ";		// ask number 1
			cin>>a;
			cout<<"ENter Number 2 : ";		// ask number 2
			cin>>b;
			
			cout<<"Addition : "<<a+b<<endl<<endl;	// addition total
		}
		
		sub()		// subtaction paramter 
		{
			int a,b;
			cout<<"Enter Number 1 : ";		// ask number 1 
			cin>>a;
			cout<<"ENter Number 2 : ";		// ask number 2 
			cin>>b;
	
			cout<<"Subtraction : "<<a-b<<endl<<endl;		// subtraction total
		}
		
		mul(double a,double b)		// multiplication paramter 
		{
			
			cout<<"Enter Number 1 : ";	// ask number 1 
			cin>>a;
			cout<<"ENter Number 2 : ";	// ask number 2 
			cin>>b;
			
			cout<<"Multiplication : "<<a*b<<endl<<endl;		// total multiplication 
		}
		
		div(float a,float b)		// division paramter 
		{
			cout<<"Enter Number 1 : ";	// ask number 1
			cin>>a;
			cout<<"ENter Number 2 : ";	// ask number 2 
			cin>>b;
			
			cout<<"Division : "<<a/b<<endl<<endl;		// total division
		}
};


main()
{
	A obj;		// Class A object is obj
	obj.add(10,5);
	obj.sub();
	obj.mul(2,4);
	obj.div(4,6);
}

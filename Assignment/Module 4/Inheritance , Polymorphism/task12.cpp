//12. Write a program to swap the two numbers using friend function without using third variable 

#include<iostream>
using namespace std;

class A{
	private:
		int a ,b;		// two value 
		
	friend swap(A& obj); 	// friend function use 
};	

swap(A& obj)			// swap function 
{
	cout<<"Enter Number A : ";		// enter number A 
	cin>>obj.a;
	
	cout<<"Enter Number B : ";		// enter number B
	cin>>obj.b;
	
	obj.a = obj.a+obj.b;			// this is formula without using third variable 
	obj.b = obj.a-obj.b;
	obj.a = obj.a-obj.b;
	
	cout<<"After swap your value A is : "<<obj.a<<endl;	// this is answer after swap A
	cout<<"After swap your value B is : "<<obj.b<<endl;	// this is answer after swap B
}

main()
{
	A obj;		// class A obj
	swap(obj);	// swap and parameter obj
}

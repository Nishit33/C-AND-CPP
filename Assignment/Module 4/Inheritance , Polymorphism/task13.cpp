//13. Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class A{  						// class create
	private:
		int a,b;				// two value 
		
	friend max(A& obj); 		// friend function
};

max(A& obj)					// max function use 
{
	cout<<"Enter Number 1 : ";		// enter number one 
	cin>>obj.a;
	
	cout<<"Enter Number 2 : ";		// enter number two 
	cin>>obj.b;
	
	if(obj.a>obj.b)		//   we can use if else statment to find out which number is greatest 
	{
		cout <<obj.a << " Number is greater!"<<endl;	// if a > b then this print 
	}
	
	else
	{
		cout<<obj.b<<" Number is greater!"<<endl;		// else b>a then this print 
	}
}

main()
{
	A obj;			// class A object 
	max(obj);	// function call 
}

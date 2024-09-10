//1. Write a program of to swap the two values using template 


#include<iostream>
using namespace std;

template<typename H> 			// template we can use 

H swap(H a , H b)			// swap two number a and b 
{
	cout<<"Enter Number A : ";		// enter number A 
	cin>>a;
	
	cout<<"Enter Number B : ";		// enter number B
	cin>>b;
	
	a = a+b;			// this is formula without using third variable 
	b = a-b;
	a = a-b;
	
	cout<<"After swap your value A is : "<<a<<endl;	// this is answer after swap A
	cout<<"After swap your value B is : "<<b<<endl;	// this is answer after swap B
}

main()
{
	swap<int>(1,2);	// int value we can pass parameter 
}

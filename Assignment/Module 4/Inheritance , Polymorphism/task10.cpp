//10.Write a program to concatenate the two strings using Operator Overloading 

#include<iostream>
#include<string.h>
using namespace std;

class A{				// class creat A
	public:
		con()
		{
			char a[10] , b[10]; 		// char two value 
			cout<<"Enter name A : ";		// enter name A
			gets(a);
			
			cout<<"Enter name B : ";		// enter name B
			gets(b);
			
			cout<<"String concat is : "<<strcat(a,b)<<endl;		// String concat 
		}
};


main()
{
	A obj;
	obj.con();
}

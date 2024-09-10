#include<iostream>
using namespace std;

class A{
	public:
		int a,b;  // public that we can use all function 
		fun1()
		{
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			
			cout<<"Addition : "<<a+b<<endl;
		}
		
		fun2()
		{
			
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			
			cout<<"Subtraction : "<<a-b<<endl;
		}
		
		fun3()
		{
			
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			
			cout<<"Multiplication : "<<a*b<<endl;
		}
};



main()
{
	A obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
}


#include<iostream>
using namespace std;

class A{
	public:
		fun1()
		{
			int a,b;
			
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			
			cout<<"Addition : "<<a+b<<endl;
			
		}
};

class B{
	public:
		fun2()
		{
			int a,b;
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			
			cout<<"Subtraction : "<<a-b<<endl;
		}
};

class C{
	public:
		fun3()
		{
			int a,b;
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
	
	B ojj;
	ojj.fun2();
	
	C okk;
	okk.fun3();
}
	
	

#include<iostream>
using namespace std;

class A{
	public:
		add()
		{
			int a,b;
			
			cout<<"Enter Number 1 : ";
			cin>>a;
			
			cout<<"Enter Number 2 : ";
			cin>>b;
			
			cout<<"Addition is : "<<a+b<<endl;
		}
};


class B{
	public:
		mul()
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
	obj.add();
	
	B obk;
	obk.mul();
}

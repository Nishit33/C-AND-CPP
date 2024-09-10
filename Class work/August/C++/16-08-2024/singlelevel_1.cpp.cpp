#include<iostream>
using namespace std;     // single level inheritance

class A{
	public:
		fun()
		{
			cout<<"This is parent class!"<<endl;
		}
};


class B:public A{
	public:
			fun1()
		{
			cout<<"This is child class!"<<endl;
		}
		
};

main()
{
	B obj;
	obj.fun();
	obj.fun1();
}

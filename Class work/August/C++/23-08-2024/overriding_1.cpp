#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"Hello"<<endl;
		}
};

class B:public A{
	public:
		myfun()
		{
			A::myfun(); // scope resolution operator 
			cout<<"Welcome";
		}
};


main()
{
	B obj;
	obj.myfun();
}

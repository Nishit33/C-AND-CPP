#include<iostream>
using namespace std;

class A{
	public:
		add()
		{
			cout<<"Hello"<<endl;
		}
};


class B:public A{
	public:
		add()
		{
			cout<<"Welcome!"<<endl;
			A::add();  		// scope resolution 
		}
};


main()
{
	B obj;
	obj.add();
}

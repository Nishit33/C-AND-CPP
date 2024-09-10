#include<iostream>
using namespace std;    //  multi level inheritance

class A{
	public:
		home()
		{
			cout<<"Grandfather has home!"<<endl;
		}
};

class F:public A{
	public:
		car()
		{
			cout<<"Father has car!"<<endl;
		}
};

class S:public F{
	public:
		respect()
		{
			cout<<"Son has respect!"<<endl;
		}
};


main()
{
	S obj;
	obj.home();
	obj.car();
	obj.respect();
}

//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;

class Hello{			// first class Hello 
	public:
		Hello()		// same name as class name 
		{
			cout<<"This is first constructor!!"<<endl;		// this is first line 
		}
};

class Hello1:public Hello{		// class 2 and with conected first class 
	public:
		Hello1()	// this is same as class 2 name 
		{
			cout<<"This is second constructor!!"<<endl;		// this is second cout 
		}
};

class Hello2:public Hello1{		// this is class 3 with multilevel class 2 
	public:
		Hello2()			// same name as class name 
		{
			cout<<"This is third constructor!"<<endl;		// and cout third constructor
		}
};


main()
{
	Hello2 obj;	// show class 3 and object
}

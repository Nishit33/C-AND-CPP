#include<iostream>
using namespace std;


class enca{
	int c,d;
	public:
		getter(int a,int b)
		{
			cout<<"A : "<<a<<endl;
			cout<<"B : "<<b<<endl;
			
			this->c=a;
			this->d=b;
		}
		
		setter()
		{
			cout<<"Addition : "<<this->c+this->d<<endl;
		}
};



main()
{
	enca obj;
	obj.getter(1,6);
	obj.setter();
	
}

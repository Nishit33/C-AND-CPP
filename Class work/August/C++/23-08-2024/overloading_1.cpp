#include<iostream>
using namespace std;

class A{
	public:
		myfun(int a,int b)
		{
			cout<<"Hello"<<endl;
		}
		
		myfun()
		{
			cout<<"Welcome"<<endl;
		}
		
		myfun(string a,string b)
		{
			cout<<a <<b <<endl;
		}
};

main()
{
	A obj;
	obj.myfun(10,20);	
	obj.myfun();
	obj.myfun("Nishit" , "Gajjar");
}

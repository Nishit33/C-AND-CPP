#include<iostream>
using namespace std;

class A{
	public:
		name()
		{
			string n;
			int age;
			int rnum;
			
			
			cout<<"Enter Your Name : ";
			cin>>n;
			
			cout<<"Enter Your Age : ";
			cin>>age;
			
			cout<<"Enter Your Roll Number : ";
			cin>>rnum;
		}
};


class B:public A{
	public:
		sub()
		{
			int e,m,s;
			
			cout<<"Enter Your marks!!"<<endl;
			
			cout<<"English : "			;
			cin>>e;
			
			cout<<"Maths : "			;
			cin>>m;
			
			cout<<"Science : "			;
			cin>>s;
		
		}
};




class C:public B{
	public:
		total()
		{
			int e,m,s;
			int total;
		
		total = e+m+s;
		cout<<"Total marks is : "<<total;	
		}
		
};



main()
{
	C obj;
	obj.name();
	obj.sub();
	obj.total();
}

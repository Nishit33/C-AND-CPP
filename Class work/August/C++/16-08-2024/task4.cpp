#include<iostream>
using namespace std;

class A{
	public:
		name()
		{
			string n;
			
			cout<<"Enter Your Name : ";
			cin>>n;
			cout<<endl;
		}
};

class B:public A{
	public:
		roll()
		{
			int n;
			
			cout<<"Enter Your Roll Number : ";
			cin>>n;
			cout<<endl;
		}
};


class C:public B{
	public:
		subject()
		{
			int m,c,p; 
			
			cout<<"Enter Your Maths Marks : ";
			cin>>m;
			cout<<endl;
			cout<<"Enter Your chem Marks : ";
			cin>>c;
			cout<<endl;
			cout<<"Enter Your phy Marks : ";
			cin>>p;
			cout<<endl;
			
			cout<<"Total "<<m+c+p<<endl;
			
		}
		
};

class D:public C{
	public:
		marks()
		{
			float total =  m + c + p;
			float percentage  = (total/300)*100;
			cout<<"Percentage : "<<percentage<<"%"<<endl;
		}
};



main()
{
	D obj;
	obj.name();
	obj.roll();
	obj.subject();
	obj.marks();
}

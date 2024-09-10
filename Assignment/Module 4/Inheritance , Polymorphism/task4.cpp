// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream> 
using namespace std;

class A{		// class A 
	public:
		string name;		// public string name 
		int roll;		// roll number 
		
		student()	// student name and roll number 
		{
			cout<<"Enter Student name : ";		// ask name 
			cin>>name;
			
			cout<<"Enter Roll Number : ";		// ask number 
			cin>>roll;	
		}
		
		ss()	// show student details
		{
			cout<<endl;
			
			cout<<"Student Name : "<<name<<endl; 		// name show
			cout<<"Student Roll Number : "<<roll<<endl;		// roll number show 
		}
};

class B:public A{		// class B derived public A 
	public:
		int m,c,p,e; 		// integer 
		marks()
		{
			cout<<endl;
			cout<<"Enter marks in Mathematics : ";		 // ask marks maths
			cin>>m;
			cout<<"Enter marks Chemistry : ";	// chem
			cin>>c;
			cout<<"Enter marks physics : ";	// phy
			cin>>p;
			cout<<"Enter marks English : ";		// eng
			cin>>e;
		}
		
		sm()
		{
			cout<<endl;
			cout<<"Mathematics : "<<m<<endl;		// showing result 
			cout<<"Chemistry : "<<c<<endl;
			cout<<"physics : "<<p<<endl;
			cout<<"English : "<<e<<endl;	
		}
		
};

class C: public B{			/// class c with derived B 
	public:
		marksheet()			/// marksheet make 
		{
			cout<<endl;
			cout<<"**********Marksheet**********"<<endl;
			
			ss();
			sm();
			int total = m+c+p+e;
			float percentage = total / 4.0;
			
			cout<<"Total Marks : "<<total<<"/400"<<endl;		// total marks out of 400 
			cout<<"percentage : "<<percentage<<"%"<<endl;	// percentage
		}
};

main()
{
	C obj;	// c obj
	obj.student();	// student ask 
	obj.marks();	// ask marks
	obj.marksheet();	// show result marksheet
}


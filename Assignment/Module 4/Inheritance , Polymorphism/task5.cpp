/* 5. Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance) */

#include<iostream>
using namespace std;

class Student{		// class student 
	public:
		string naam;	// string name 
		int roll;		// integer roll number 
		name()
		{
			cout<<"Enter Student Name : ";	// ask name student 
			cin>>naam;
			
			cout<<"Enter Roll Number : ";		// ask roll number student 
			cin>>roll;
		}
		
		shown()		// show all student information 
		{
			cout<<endl;
			
			cout<<"Student name : "<<naam<<endl;			// student name 
			cout<<"Student Roll number : "<<roll<<endl;		// student roll number 
		}
		
};

class Test:public Student{		// class test derived with student 
	public:
		int e,h;
		mark()
		{
			cout<<endl;
			cout<<"Enter Marks English : ";		// ask english mark
			cin>>e;
			
			cout<<"Enter Marks Hindi : ";		// ask hindi mark
			cin>>h;
		}
		
		showm()
		{
			cout<<endl;
			cout<<"English : "<<e<<endl;		// show mark
			cout<<"Hindi : "<<h<<endl;		
		}
};

class Total:public Test{		// class total derived with test 
	public:
		all()
		{
			cout<<endl;
			cout<<"******Total******"<<endl;		// total
			shown();		// student information
			showm();	// student marks
			int total = e+h;
			float percentage = total / 2.0;
			
			cout<<"Total Marks : "<<total<<"/200"<<endl;	// total mark 200
			cout<<"Percentage : "<<percentage<<"%"<<endl;	// percentage
			
		}
};


main()
{
	Total obj;	// total obj
	obj.name();		// obj name 
	obj.mark();	// obj mark
	obj.all();		// obj all show 
}


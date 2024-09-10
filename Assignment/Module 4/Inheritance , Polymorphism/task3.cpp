/*3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */


#include<iostream>
using namespace std;

class person{		// class person 
	public:
		string name;	// string name 
		int age,per;	// integer age and percentage
		student()		// student function 
		{
			
			cout<<"Enter Student Name : ";		// enter student name 
			cin>>name;						// store in name 
			
			cout<<"Enter Student age : ";		// enter student age 
			cin>>age;							// store in age 
			
			cout<<"Enter Student percentage : ";	// enter student percentage 
			cin>>per;							// store in per 
		}
		
		shows()		// display all details
		{
			cout<<endl;  	// new line 
			
			cout<<"Name : "<<name<<endl;		// name 
			cout<<"Age : "<<age<<endl;			// age 
			cout<<"Percentage : "<<per<<"%"<<endl;		// percentage
		}
};


class Teacher:public person{		// class another teacher and derived in public person
	public:
		string name;			// string name
		int salary;			// integer salary
		
		naam()
		{
			cout<<endl;
			cout<<"Enter Teacher Name : ";		// ask name teacher 
			cin>>name;
			
			cout<<"Enter Teacher Salary : ";	// ask salary 
			cin>>salary;
		}
		
		showt()			// show this details
		{
			cout<<endl;
			cout<<"Teacher name : "<<name<<endl;		// name 
			cout<<"Teacher salary : "<<salary<<endl;		// and salary 
		}
};

main()
{
	Teacher obj;	// teacher obj 
	obj.student();	// call student 
	obj.shows();	// show student 
	obj.naam();	// teacher 
	obj.showt();		// display teacher details
}

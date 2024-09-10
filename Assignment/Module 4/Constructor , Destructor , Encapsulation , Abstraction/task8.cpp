/*8. Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation */



#include<iostream>
using namespace std;

class Student{				// class student 
	private:				// private 
		string name;				// string name 
		int studentclass,roll,marks;		// stundentclass , rollnumber , marks
		
	public:
	
		ask()			// ask student information
		{
			cout<<"Name : ";		// name 
			cin>>name;
			
			cout<<"Enter class : ";		// class
			cin>>studentclass;
			
			cout<<"Enter Roll Number : ";		// roll number 
			cin>>roll;
			
			cout<<"Enter Marks : ";		// marks
			cin>>marks;
		}
		
		char grade()		// grade function 
		{
		
        if (marks >= 90)		// we use if else statement depends marks
            return 'A';
            
        else if (marks >= 75)
            return 'B';
            
        else if (marks >= 50)
            return 'C';
            
        else
            return 'D';
		}
		
		
		show()				// display student information
		{
			cout<<endl;		// new line 
		cout << "Student Name: " <<name<<endl;		 // student name
        cout << "Class: " <<studentclass<<endl;      // class
        cout << "Roll Number: " <<roll<<endl;		// roll number 
        cout << "Marks: " <<marks<<endl;		// marks
        cout << "Grade: " <<grade()<<endl;			// grade
		}
		
		
};

main()
{
	Student obj;			// class student object
	obj.ask();		// obj ask 
	obj.grade();		// obj grade
	obj.show();		// obj show 
}

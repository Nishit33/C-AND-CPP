#include<iostream>
using namespace std;

class lecture{				// class name lecture
	public:
		string namelecturer;		// string namelecturer 
		string subject;				// string subject
		string course ;			// string course
		int lecturers;			// int how many lecturers
	
	input()			// INPUT 	
	{
		int i;
		for(i=1;i<=5;i++)
		{
		cout<<"Enter Name Lecturer : ";				// enter name of lecturer 
		cin>>namelecturer;
		
		cout<<"Enter Subject : " ;			// enter subject 
		cin>>subject;
		
		cout<<"Enter Course : ";		// enter course
		cin>>course;
		
		cout<<"Enter Number of lectures : ";		// enter number of lectures 
		cin>>lecturers;
		cout<<endl;
		
		}
		
	}
		
		
	display()			// display data
	{
		cout<<endl<<endl;			// new line 
		int i;
		for(i=1;i<=5;i++)
		{
			cout<<"Name Lecturer : "<<namelecturer<<endl;	// name lecturer 
			cout<<"Subject : "<<subject<<endl;			// subject show
			cout<<"Course : "<<course<<endl;					// course show 
			cout<<"Number of lecture : "<<lecturers<<endl;	// number of lecture
			cout<<endl; 	
		}
		
	}
};



main()
{
	lecture obj;			// class lecture object is obj
	obj.input();			// obj . input call 
	obj.display();		// obj.display call 
}

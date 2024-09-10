//  WAP to create simple calculator using class


#include<iostream>
using namespace std;

class A{                   // class 
	public:					// public	
		cal() 								// function
		{
			int a,b;
			int choice;
			
			cout<<"Enter Number 1 : ";   	// enter number 1
			cin>>a;
			
			cout<<"Enter Number 2 : ";		// enter number 2
			cin>>b;
			
			cout<<endl;
			
			cout<<"1 Addition"<<endl;
			cout<<"2 Subtraction"<<endl;
			cout<<"3 Multiplication"<<endl;
			cout<<"4 Divided"<<endl;
			
		cout<<endl;
		
			cout<<"Enter Your choice : "; 	// enter choice
			cin>>choice;
			
		cout<<endl;	
		
			switch(choice)
			{
				case 1:
					cout<<"Addition : "<<a+b<<endl;   // for addition
					break;	
			
				case 2:
					cout<<"Subtraction : "<<a-b<<endl; // for sub
					break;		
			
				case 3:
					cout<<"Multiplication : "<<a*b<<endl; // for mul
					break;
			
				case 4:
					cout<<"Divided : "<<a/b<<endl;      // divided
					break;
	
			}
			
						
		}
		
};

main()
{
	A obj;
	obj.cal();
}

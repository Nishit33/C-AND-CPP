#include<iostream>
using namespace std;

class A{			// Friend function 
	private:
		int a,b;
		
	friend show(A& obj);
	
};
	
	show(A& obj)
		{
			cout<<"Enter Number A : ";
			cin>>obj.a;
			cout<<"Enter Number B : ";
			cin>>obj.b;
			
			cout<<"Addition is : "<<obj.a+obj.b;	
		}


main()
{
	A obj;
	show(obj);
	
}

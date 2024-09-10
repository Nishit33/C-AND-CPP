#include<iostream>
using namespace std;

class Employee{		// abstract class
	public:
		info()	
		{
			cout<<"Your Salary credit in your account"<<endl;
		}
		
		virtual salary()=0;     // pure virtual function
};


class Nishit:public Employee{
	public:
		salary()
		{
			cout<<"Nishit payout is 200k"<<endl;	
		}
		
};

class Meet:public Employee{
	public:
		salary()
		{
			cout<<"Meet payout is 30k"<<endl;	
		}
		
};

class Rahul:public Employee{
	public:
		
		salary()
		{
			cout<<"Rahul payout is 50k"<<endl;	
		}
		
		
};



main()
{
	Nishit obj;
	obj.info();
	obj.salary();
	
	Meet obj1;
	obj1.info();
	obj1.salary();
	
	Rahul obj2;
	obj2.info();
	obj2.salary();
	
}

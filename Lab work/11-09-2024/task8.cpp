#include<iostream>
using namespace std;


class Bank{

	public:
		
		string name;
	    int acc;
		int balance=5000;
		int dep,with;
		
		n()
		{
			cout<<"Enter Your name : ";
			cin>>name;
			
			cout<<"Enter Your account number : ";
			cin>>acc;
			
			cout<<"Your balance is : " <<balance<<endl;
			
			this->balance=balance;
		}
		
		depo()
		{
			
			int dep;
			
			cout<<"Enter for deposit : ";
			cin>>dep;
			
			this->dep=dep;
			
			this->balance=this->balance+this->dep;
			
			cout<<"Now your balance is : "<<this->balance<<endl;
		}
		
		withdraw()
		{
			int with;
			
			cout<<"Enter Your withdraw amount : ";
			cin>>with;
			
			this->with=with;
			
			this->balance=this->balance-this->with;
			
			cout<<"Now your balance is : "<<this->balance<<endl;
		}
};



main()
{
	Bank obj;
	obj.n();
	obj.depo();
	obj.withdraw();
}

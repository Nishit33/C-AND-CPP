#include<iostream>
using namespace std;

class bank{
	public:
		
		string name;
		int acn,balance=5000;
		int depo,wth;
		
		acopen()
		{
			cout<<"Name : ";
			cin>>name;
			cout<<"Account Number : ";
			cin>>acn;
			
			cout<<"Deposit is : "<<balance<<endl;
			
			this->balance=balance;
			
		}
		
		deposit()
		{
			int depo;
			
			cout<<"Enter Amount for deposit";
			cin>>depo;
			
			this->depo=depo;
			
			this->balance=this->balance+this->depo;
			
			cout<<"Now your balance is : "<<this->balance<<endl;
		}
		
		withdraw()
		{
			int wth;
			cout<<"Enter Amount for withdraw";
			cin>>wth;
			
			this->wth=wth;
			
			this->balance=this->balance-this->wth;
			cout<<endl;
			cout<<"Now Your balance is : "<<this->balance<<endl;
		}
		
};



main()
{
	bank obj;
	obj.acopen();
	obj.deposit();
	obj.withdraw();
}

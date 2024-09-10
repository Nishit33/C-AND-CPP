// 2. Define a class to represent a bank account. Include the following members: 


#include<iostream>
using namespace std;

class bank{                     // class bank
	public:						// public
		double balance=5000;   // balance alredy in bank
		int amount,wth;
		string name,tya;
		int acno;
		
		acopen()              // method account open 
		{	
			
			cout<<"Name of the depositor : ";  // name of account holder 
			cin>>name;
			
			cout<<"Account Number : ";         // account number 
			cin>>acno;
			
			cout<<"Type of Account : ";			// account type
			cin>>tya;
			
			cout<<"Balance amount in the account : "<<balance;		// balance amount 
			cout<<endl<<endl<<endl;
		}
		
		deposit() 					// deposit method function
		{
			
			cout<<"Enter Deposit : ";	// enter deposit 
			cin>>amount;
			
			cout<<"After deposit your balance is : "<<balance+amount<<endl;		// after deposit balance
			
			cout<<endl<<endl<<endl;        // new line 
		}
		
		
		withdraw() 			// withdraw method function
		{
			
			cout<<"Enter Withdraw amount : ";		// enter withdraw in bank account
			cin>>wth;
			
			cout<<endl<<endl;              // new line
			
			cout<<"Name of the depositor : "<<name<<endl; 		// show account holder name
			cout<<"After withdraw your balance is : "<<balance+amount-wth<<endl; // after withdraw amount 
		}
};



main()
{
	bank obj;                // bank object
	obj.acopen();			// acopen
	obj.deposit();			// deposit
	obj.withdraw();			//withdraw
}

/*4. Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */

#include<iostream>
using namespace std;

class Bank{						// class bank
	private:
	int acc;						// private account number and balance 
	int balance = 5000;
	
	public:
		int balancee,with;	
		Bank()						// same as class name to show acc number and balance 
		{
			cout<<"Acc Number : 98765434589"<<endl;		// account number show 
			cout<<"Balance : 5000 "<<endl;			// balance amount show 
		}
		
		deposit()					// deposit function
		{
			cout<<"Enter Deposite : ";		// enter deposit
			cin>>balancee;
			
			this->balancee=balancee;			// store in balance
			
			this->balance=this->balance+this->balancee;		// balance + deposit
			
			cout<<"Your balance is : "<<balance<<endl<<endl;		// After balance 
		}
		
		withdraw()		// withdraw function 
		{
			cout<<"Enter Withdraw : ";			// enter amount withdraw
			cin>>with;
			
			this->with=with;		// withdraw 
			
			this->balance=this->balance-this->with;		// balance - withdraw 
			
			cout<<"After Withdraw Your balance is : "<<this->balance<<endl<<endl;	// final balance after withdraw 
		}
};


main()
{
	Bank obj;	// object creat bank 
	obj.deposit();	// call deposite 
	obj.withdraw();		// withdraw 
}

#include<iostream>
using namespace std;

menu()
{
	cout<<"1 account opening"<<endl;
	cout<<"2 Exit"<<endl;
	
	int choice;
	string name;
	int acn;
	int balance=5000;
	
	cout<<"Enter your choice : ";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1:
			cout<<"Name : ";
			cin>>name;
			cout<<"Account Number : ";
			cin>>acn;
			
			cout<<"Deposit is : "<<balance<<endl;
			break;
			
			
			
		case 2:
			cout<<"You are exit!!"<<endl;
			break;
				
	}
	
}

depo()
{
	cout<<endl;
	cout<<"1 Deposit"<<endl;
	cout<<"2 withdraw"<<endl;
	cout<<"3 View balance"<<endl;
	cout<<"4 Exit"<<endl;
	
	int choic,depo;
	int balance=5000;
	int wth;
	cout<<endl;
	cout<<"Enter Your choice : ";
	cin>>choic;
	
	
		switch(choic)
		{
			case 1:
				cout<<"Enter Amount for deposit : ";
				cin>>depo;
			
				cout<<"Now your balance is : " <<balance+depo<<endl;
				break;
			
			case 2:
				cout<<"Enter Amount for withdraw : ";
				cin>>wth;
			
				cout<<"Now Your balance is : "<<balance-wth<<endl;
				break;
			
			case 3:
				cout<<"Your Balance is : "<<balance<<endl;
				break;
				
			case 4:
				cout<<"You are exit!"	;
				break;
		}
				
		
	
	
}


main()
{
	menu();
	depo();
}

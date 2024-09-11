#include<iostream>
using namespace std;

class Hello{
	public:
		Hello()
		{
			cout<<"Welcome to this website!"<<endl;
		}
		
		add()
		{
			int a,b;
			
			cout<<"Enter Number 1 : ";
			cin>>a;
			
			cout<<"Enter Number 2 : ";
			cin>>b;
			
			cout<<"Addition is : "<<a+b<<endl;
		}
		
		~Hello()
		{
			cout<<"Thank You for using this website";
		}
};


main()
{
	Hello obj;
	obj.add();
}


#include<iostream>
using namespace std;

class Hello{
	public:
		Hello()  // Constructor
		{
			cout<<"Welcome to our website!!"<<endl;
		}
		
		reverse()
		{
			int n,rev,res=0;
			
			cout<<"Enter Number : ";
			cin>>n;
			
			while(n!=0)
			{
				res = n%10;
				rev = rev*10+res;
				n/=10;
			}
			cout<<"Reverse Number is : "<<rev<<endl;
		}
		
		~Hello() // Destructor
		{
			cout<<"Thank You For Using This Website!"<<endl;
		}
		
};


main()
{
	Hello obj;
	obj.reverse();
}

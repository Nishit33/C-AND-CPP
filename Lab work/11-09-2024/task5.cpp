#include<iostream>
using namespace std;



class A{
	public:
		add(int a)
		{
			cout<<"Hello"<<endl;
		}
		
		add()
		{
			cout<<"Welcome"<<endl;
		}
		
		add(string a)
		{
			cout<<a<<endl;
		}
};


main()
{
	A obj;
	obj.add(4);
	obj.add();
	obj.add("Ant");
	
}

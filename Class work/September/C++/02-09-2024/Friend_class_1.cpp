#include<iostream>
using namespace std;

class A{			// friend class 
	private:
		int a,b;
		
	friend class B;
};

class B{
	public:
		show(A& obj)
		{
			cout<<"Enter Number A : ";
			cin>>obj.a;
			cout<<"Enter Number B : ";
			cin>>obj.b;
			
			cout<<"Addition is : "<<obj.a+obj.b;
		}
};


main()
{
	A obj;
	B obj1;
	obj1.show(obj);
	
}

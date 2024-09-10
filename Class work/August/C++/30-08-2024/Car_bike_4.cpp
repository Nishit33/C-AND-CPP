#include<iostream>
using namespace std;

class Hello{
	public:
	
	virtual wheel()=0;
	virtual colour()=0;
};


class Truck:public Hello{
	public:
		wheel()
		{
			cout<<"Truck have 6 wheel"<<endl;
		}
		colour()
		{
			cout<<"Truck colour is yellow"<<endl;
		}
};

class Car:public Hello{
	public:
		wheel()
		{
			cout<<"Car have 4 wheel"<<endl;
		}
		colour()
		{
			cout<<"Car colour is White"<<endl;
		}
};

class Bike:public Hello{
	public:
		wheel()
		{
			cout<<"Bike have 2 wheel"<<endl;
		}
		colour()
		{
			cout<<"Bike colour is Black"<<endl;
		}
};

main()
{
	Truck obj;
	obj.wheel();
	obj.colour();
	
	Car obj1;
	obj1.wheel();
	obj1.colour();
	
	Bike obj2;
	obj2.wheel();
	obj2.colour();
}

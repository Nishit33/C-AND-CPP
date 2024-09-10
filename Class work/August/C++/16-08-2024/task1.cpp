#include<iostream>
using namespace std;

class Myclass{
	public:
		Myclass(int a,int b) // parametrised constructor
		{
			cout<<"A : "<<a<<endl;
			cout<<"B : "<<b;
		}
};


main()
{
	Myclass obj(12,14);  // object pass 
}


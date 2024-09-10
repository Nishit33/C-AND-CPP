#include<iostream>
using namespace std;


raw(int a[])
{
	int i;
	for(i=0;i<4;i++)
	{
		cout<<"Number Are : "<<a[i]<<endl<<endl;
	}
}


main()
{
	int i;
	int a[5];
	for(i=0;i<4;i++)
	{
		cout<<"Enter Number : ";
		cin>>a[i];
	}
	
	raw(a);
}

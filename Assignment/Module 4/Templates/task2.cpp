//2. Write a program of to sort the array using templates 

#include<iostream>
using namespace std;

template<typename K>			// template we can use 

K dec(K a[])		// array
{
	K temt;			// temt file
	for(int i=1;i<=4;i++)	// for loop beacuse asking 4 time 
	{
		cout<<"Enter Number : ";			// enter number 
		cin>>a[i];
	}
	
	for(int i=1;i<=4;i++)		// same as upper 
	{
		for(int j=1;j<=i;j++)	// we can use another loop for change number 
		{
			if(a[i]>a[j])		// if a[i] greater than a[j]
			{
				temt = a[i];	// we can use temt = a[i]
				a[i] = a[j];	// a[i] = a[j]
				a[j] = temt;	// a[j] = temt
			}
		}
	}
	
	for(int i=1;i<=4;i++)	// and last for loop for our answer 
	{
		cout<<"Decending Number is : "<<a[i]<<endl;	// decending number print 
	}
}


main()
{
	int a[4];	
	dec(a);	// call dec function
}

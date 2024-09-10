// 1. Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
main()
{
	int n1,n2; // two value store int
	
	printf("Enter Number A : "); // ask number one 
	scanf("%d",&n1);
	
	printf("Enter Number B : "); // ask number two
	scanf("%d",&n2);
	
	if(n1==n2)  // if this or that number is equal that will be equal 
	{
		printf("This is Equal Number!");
	}
	else // or this is not equal number 
	{
		printf("This is Not Equal Number!");
	}
}

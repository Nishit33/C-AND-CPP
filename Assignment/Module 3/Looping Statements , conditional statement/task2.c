//2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
main()
{
	int a[5];
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter Number %d : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=5;i++)
	{
		printf("\nNumber %d : %d",i,a[i]);
	}
	
}

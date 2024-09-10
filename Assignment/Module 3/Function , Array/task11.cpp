//11.WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include<stdio.h>
main()
{
	int num[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Number : ");
		scanf("%d",&num[i]);
	}
	
	for(i=4;i>=0;i--)
	{
		printf("\n%d",num[i]);
	}
	
}


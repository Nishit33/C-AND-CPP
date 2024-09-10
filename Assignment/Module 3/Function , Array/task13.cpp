// 13.WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include<stdio.h>
main()
{
	int n[5],i;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter Number %d : ",i);
		scanf("%d",&n[i]);
	}
	
	for(i=1;i<=5;i++)
	{
		if(n[i]%2==0)
		{
			printf("\nNumber %d is even!",n[i]);
		}
		else
		{
			printf("\nNumber %d is odd",n[i]);
		}
	}
}


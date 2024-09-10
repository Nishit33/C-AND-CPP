// 10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main()
{
	int number;
	
	printf("\nEnter Number : ");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("\nNumber is positive");
	}
	else if(number==0)
	{
		printf("\nNumber is zero");
	}
	else
	{
		printf("\nNumber is negative");
	}
}

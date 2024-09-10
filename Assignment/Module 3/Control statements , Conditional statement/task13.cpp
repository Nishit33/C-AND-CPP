//13.WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter Number : ");
	scanf("%d",&n1);
	
	printf("Enter Number : ");
	scanf("%d",&n2);
	
	printf("Enter Number : ");
	scanf("%d",&n3);
	
	if(n1<n2)
	{
		if(n1<n3)
		{
			printf("\n%d is minimum!",n1);
		}
		else
		{
			printf("\n%d is minimum",n3);
		}
	}
	else
	{
		if(n2<n3)
		{
			printf("\n%d is minimum!",n2);
		}
		else
		{
			printf("\n%d is minimum!",n3);
		}
	}
	
}

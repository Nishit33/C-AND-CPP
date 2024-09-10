//14.WAP to find the largest of three numbers.

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
	
	if(n1>n2 && n1>n3)
	{
		printf("\n%d is largest Number",n1);
	}
	
	else if(n2>n3 && n2>n1)
	{
		printf("\n%d is largest Number",n2);
	}
	
	else
	{
		printf("\n%d is largest number",n3);
	}
}

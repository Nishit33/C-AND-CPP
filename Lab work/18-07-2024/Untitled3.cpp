#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++) //triangle and revers both together
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}

#include<stdio.h>

main()
{
int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=0;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");	
		}
	printf("\n");		
	}
	
	for(i=5;i>=0;i--)
	{
		for(k=0;k<=5-i;k++)
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



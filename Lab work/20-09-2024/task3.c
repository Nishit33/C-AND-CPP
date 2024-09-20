#include<stdio.h>
main()
{
	int i,j,k;
	char a='A';
	
	for(i=1;i<=5;i++)
	{
		for(k=0;k<=5-i;k++)
		{
			printf("");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %c",a);
			a++;	
		}
	printf("\n");		
	}
}

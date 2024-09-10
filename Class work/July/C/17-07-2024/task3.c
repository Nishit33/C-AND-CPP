#include<stdio.h>
main()
{
	int i,k,j;
	
	for(i=5;i>0;i--)  // row
	{
		for(k=1;k<=5-i;k++) // space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)  // colloum
		{
			printf(" *");  // space and then * print
		}
		printf("\n");
	}
}

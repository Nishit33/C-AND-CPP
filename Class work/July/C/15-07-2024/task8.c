#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=5;i++)  // raw
	{
		for(j=1;j<=i;j++)   // colum
		{
			printf("*");  // print (*)
		}
		printf("\n");   // New line 
	}
}
